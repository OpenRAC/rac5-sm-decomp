/* USA LEVEL_18.REL:0x15B878, 432-byte candidate (22 November 2026).
 * Measured pinned -fno-gcse: 11 differing words; first difference at 0xC4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Model {
    char pad00[4];
    char *ents;
    char pad08[0x37];
    unsigned char b3F;
} Model;

typedef struct Ent {
    char pad00[0xC];
    int w0C;
    int w10;
    int w14;
} Ent;

typedef struct Pool {
    char pad00[0x64];
    char *slots;
} Pool;

typedef struct Owner {
    char pad000[0xF4];
    int w0F4;
    char pad0F8[0x59C - 0xF8];
    int w59C;
} Owner;

typedef struct Part {
    char pad00[0x108];
    short s108;
} Part;

typedef struct Slot {
    unsigned short h0;
    char pad2;
    unsigned char b3;
} Slot;

typedef struct Rec {
    Part *part;
    char pad004[0x160 - 4];
    unsigned short h160;
    char pad162;
    unsigned char b163;
    char pad164[0x174 - 0x164];
    int w174;
    char pad178[0x1A0 - 0x178];
    int w1A0;
} Rec;

typedef struct V3 {
    float x, y, z;
} V3;

typedef struct Hold {
    char pad00[0x30];
    V3 pos;
} Hold;

typedef struct Target {
    char pad00[0x10];
    Hold *hold;
} Target;

typedef struct Obj {
    char pad00[0x40];
    Model *model;
    unsigned char b44;
    unsigned char state;
    char pad46[0xE];
    Target *target;
    Rec *rec;
    char pad5C[8];
    unsigned int flags;
} Obj;

extern Pool D_001DE778[];
extern int D_001BF244;
extern int D_001BF248;
extern float D_001BF254;
extern unsigned int D_001A2F64;

extern void func_036608(Owner *o);
extern void func_078CA8(int a);
extern void func_1156F8(int index, int value);
extern int func_000DA0(int index);
extern void func_072D30(int h);
extern void func_036858(Owner *o, int v);
extern int SND_PlayPositionalSound(void *snd, float *pos, float f12, void *out, unsigned int id)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");

void func_15B878(Obj *o, Owner *ow)
{
    Rec *rec;
    Slot *sl;
    V3 v;
    V3 *q;
    Ent *ent;
    Model *m;
    unsigned int base;
    unsigned int f;
    unsigned int alt;

    rec = o->rec;
    rec->w174 = 0;
    o->state = 0;
    rec->part->s108 = 2;
    rec->part = 0;
    func_036608(ow);
    func_078CA8(2);
    m = o->model;
    ent = (Ent *)(m->ents + o->b44 * 0x34);
    base = o->flags & 0x1420;
    alt = base | 1;
    f = base | 0x81;
    if (ent->w0C == 0)
        f = alt;
    if (ent->w10 != 0)
        f |= 0x100;
    if (ent->w14 != 0)
        f |= 0x200;
    if (m->b3F == 1)
        f |= 0x800;
    if (((o->flags >> 3) & 1) != 0)
        f |= 0x400;
    sl = (Slot *)&rec->h160;
    if (sl->h0 != 0xFFFF)
        *(unsigned short *)(D_001DE778[sl->b3].slots + sl->h0 * 0x10 + 8) = f;
    func_1156F8(ow->w0F4 - 1, 0);
    func_000DA0(0);
    if (D_001BF244 != 0) {
        q = &o->target->hold->pos;
        v.x = o->target->hold->pos.x;
        v.y = q->y;
        v.z = q->z;
        v.y = v.y + D_001BF254;
        SND_PlayPositionalSound((void *)D_001BF248, &v.x, 0.0f, 0, D_001A2F64);
    }
    if (rec->w1A0 != 0) {
        func_072D30(rec->w1A0);
        rec->w1A0 = 0;
    }
    o->flags |= 0x400;
    if (ow->w59C != 0)
        func_036858(ow, 1);
}
