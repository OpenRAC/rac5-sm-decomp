/* LEVEL_17:0x15C678 -- shuts down the actor's active state: clears its object links, rebuilds the slot flags from the table record and releases the sound. */
typedef struct {
    int pad_00[3];
    int w0C;
    int w10;
    int w14;
    char pad_18[0x34 - 0x18];
} Rec;

typedef struct {
    char pad_00[4];
    Rec *recs;
    char pad_08[0x37];
    unsigned char b3F;
} Table;

typedef struct {
    char pad_000[0x102];
    short s102;
    char pad_104[0x578 - 0x104];
    float f578;
    char pad_57C[0xDD4 - 0x57C];
    int wDD4;
} Obj;

typedef struct {
    unsigned short slot;
    char pad_02;
    unsigned char set;
} Slot;

typedef struct {
    Obj *obj;
    char *sound;
    int w08;
    char pad_0C[0x24];
    Slot sl;
} State;

typedef struct {
    char pad_00[0x40];
    Table *table;
    unsigned char idx;
    unsigned char b45;
    char pad_46[0x12];
    State *state;
    char pad_5C[8];
    unsigned int flags;
} Actor;

typedef struct {
    char pad_00[0x14];
    float v14;
    float v18;
    float v1C;
    float v20;
} Fx;

typedef struct {
    char pad_00[0x64];
    char *slots;
} Entry;

extern Fx *D_001B156C[1];
extern Entry D_001CF6F8[];
struct Obj;
extern int func_037C08(char *object);
extern void func_037618(struct Obj *o);
extern unsigned int func_079E00(void);
extern void func_079DA0(unsigned int value);
extern void func_036DA8(float f, int a, int b, int c, void *d, void *e, void *f2);
extern void func_073C48(void *obj, void *rec, int e, int f, int g, int h, int i, int j, float a, float b, float c, float d);
extern void func_073DB0(char *record);

static __inline__ void Spawn(Actor *a, Fx *rec)
{
    if (rec != 0)
        func_073C48(a, rec, 0, 0, 0, 0, 0, 1, rec->v14, rec->v18, rec->v1C, rec->v20);
}

void func_15C678(Actor *a, struct Obj *ctx)
{
    State *s;
    Slot *sl;
    Rec *r;
    unsigned int v;
    unsigned int plain;
    unsigned int u;
    unsigned int f;

    s = a->state;
    s->w08 = 0;
    a->b45 = 0;
    if (!func_037C08((char *)ctx))
        s->obj->s102 = 0;
    s->obj->wDD4 = 0;
    func_037618(ctx);
    if (func_079E00() != 0x200)
        func_079DA0(2);
    sl = &s->sl;
    r = &a->table->recs[a->idx];
    f = a->flags & 0x1420;
    plain = f | 1;
    v = f | 0x81;
    if (r->w0C == 0)
        v = plain;
    if (r->w10 != 0)
        v |= 0x100;
    if (r->w14 != 0)
        v |= 0x200;
    if (a->table->b3F == 1)
        v |= 0x800;
    if (a->flags >> 3 & 1)
        v |= 0x400;
    u = v | 0x10;
    if (s->sl.slot != 0xFFFF)
        *(unsigned short *)(D_001CF6F8[sl->set].slots + (s->sl.slot << 4) + 8) = u;
    s->obj->f578 = 10000.0f;
    func_036DA8(0.0f, (int)s->obj, 1, 1, (char *)a + 0x30, (char *)a + 0x20, a);
    s->obj = 0;
    Spawn(a, D_001B156C[0]);
    if (s->sound != 0) {
        func_073DB0(s->sound);
        s->sound = 0;
    }
    a->flags |= 0x400;
}
