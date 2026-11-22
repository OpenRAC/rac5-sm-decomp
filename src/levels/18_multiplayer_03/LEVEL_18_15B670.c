/* LEVEL_18:0x15B670 -- attaches a freshly spawned object to its owner: resets the owner's helper state, registers the object's collision proxy with the flags of its type record, plays the attach sound at the target position and starts the owner's attach effect. */
typedef struct { float x, y, z; } Vec3;

typedef struct { char pad00[0x0C]; int w0C; int w10; int w14; char pad18[0x34 - 0x18]; } Rec34;
typedef struct { char pad00[4]; Rec34 *recs; char pad08[0x3F - 8]; unsigned char b3F; } Type;
typedef struct { char pad00[0x30]; Vec3 pos; } Target;
typedef struct { char pad00[0x10]; Target *target; } Holder;

typedef struct {
    unsigned short id;
    unsigned char b2;
    unsigned char b3;
} Seg;

typedef struct {
    char *owner;
    char pad04[0x160 - 4];
    Seg seg;
    char pad164[0x174 - 0x164];
    int w174;
} State;

typedef struct {
    char pad00[0x40];
    Type *type;
    unsigned char b44;
    unsigned char b45;
    char pad46[0x54 - 0x46];
    Holder *holder;
    State *state;
    char pad5C[0x64 - 0x5C];
    unsigned int flags;
    char pad68[0x70 - 0x68];
    int w70;
} Obj;

typedef struct { unsigned short a; unsigned short b; unsigned short c; unsigned short d; unsigned short flags; char pad0A[6]; } Ent16;
struct Tab {
    char pad00[0x64];
    Ent16 *ents;
};

extern struct Tab D_001DE778[];
extern void *D_001D62E8[];
extern char D_00000FD8[];
extern void *D_001BF248;
extern float D_001BF254;
extern unsigned int D_001A2F64;

extern int func_05C148(char *object);
extern void func_05C000(char *o, int flag);
extern void func_036608(char *o);
extern void func_078CA8(unsigned int value);
extern void func_036858(char *first, int second);
extern void func_06F370(float a, float b, int c, int d, int e, int f);
extern void func_15C9B8(char *o);
extern void func_1156F8(int index, int value);
extern void func_000D58(int index, int a, int b);
extern void SND_PlayPositionalSound(void *snd, float *pos, float f12, void *out, unsigned int id)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");

static __inline__ void Copy3(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

void func_15B670(Obj *obj, char *owner)
{
    State *st;
    Type *type;
    Rec34 *rec;
    Seg *seg;
    Target *tg;
    Vec3 pos;
    unsigned int tf;
    unsigned int base;
    unsigned int alt;
    unsigned int f;
    unsigned int fl;
    Ent16 *e;

    st = obj->state;
    st->owner = owner;
    obj->b45 = 1;
    if (func_05C148(owner) != 0)
        func_05C000(owner, 0);
    func_036608(owner);
    st->w174 = 0;
    obj->w70 = 0;
    *(short *)(owner + 0x108) = 0;
    *(short *)(owner + 0x10A) = 0;
    *(void ***)(owner + 0xDD4) = D_001D62E8;
    *(short *)(owner + 0x100) = 0x4A;
    func_036608(owner);
    func_078CA8(0x10);
    seg = &st->seg;
    tf = obj->flags;
    type = obj->type;
    base = tf & 0x1420;
    rec = type->recs + obj->b44;
    alt = base | 1;
    f = base | 0x81;
    if (rec->w0C == 0)
        f = alt;
    if (rec->w10 != 0)
        f |= 0x100;
    if (rec->w14 != 0)
        f |= 0x200;
    if (type->b3F == 1)
        f |= 0x800;
    if ((tf >> 3) & 1)
        f |= 0x400;
    fl = f | 0x1000;
    if (seg->id != 0xFFFF) {
        e = D_001DE778[seg->b3].ents + seg->id;
        e->flags = fl;
    }
    if (*(int *)(owner + 0x59C) != 0)
        func_036858(owner, 0);
    if (D_001BF248 != 0) {
        tg = obj->holder->target;
        Copy3(&pos, &tg->pos);
        pos.y += D_001BF254;
        SND_PlayPositionalSound(D_001BF248, &pos.x, 0.0f, 0, D_001A2F64);
    }
    func_06F370(0.15000000596046448f, 0.0f, *(int *)(owner + 0x59C), 0, 0, 1);
    func_15C9B8(owner);
    func_1156F8(*(int *)(owner + 0xF4) - 1, 1);
    func_000D58(0, (int)D_00000FD8, (int)st + 0x1A8);
}
