/* LEVEL_07:0x1718F8 -- initializes an effect object: clears its record, validates its info block, attaches helpers, submits a collision query built from the owner's bounds and flags, and seeds the record's speed, scale and sound handle. */
typedef struct { float x, y, z; } V3;
typedef struct { char pad0[0xC]; int w0C; int w10; int w14; char pad18[0x28 - 0x18]; float f28; char pad2C[0x34 - 0x2C]; } E;
typedef struct { char pad0[4]; E *tab; char pad8[0x3F - 8]; unsigned char b3F; } D;
typedef struct {
    char pad0[0x30];
    V3 pos;
    char pad3C[0x40 - 0x3C];
    D *d;
    unsigned char idx;
    unsigned char state;
    char pad46[0x64 - 0x46];
    unsigned flags;
} C;
typedef struct {
    char pad0[3];
    unsigned char b3;
    C *c;
    V3 v8;
    V3 v14;
    unsigned char b20;
    char pad21;
    unsigned short h22;
    char pad24[8];
    float f2C;
    int w30;
    char pad34[0xC];
    float f40;
    unsigned char b44;
    char pad45[2];
    unsigned char b47;
} A;
typedef struct { char pad0[0x68]; } T;
typedef struct {
    char pad0[0x29];
    unsigned char b29;
    char pad2A[6];
    int w30;
    int w34;
    int w38;
    char pad3C[5];
    unsigned char b41;
} Info;
typedef struct {
    char pad0[0x20];
    V3 dir20;
    char pad2C[4];
    V3 pos30;
    char pad3C[4];
    D *d;
    unsigned char idx;
    unsigned char state;
    char pad46[0xE];
    Info *info;
    A *a;
    char pad5C[0x1B];
    unsigned char b77;
    unsigned w78;
} O;

extern T D_00244FF8[];
extern char D_0022EB00[];
extern int D_0022F4F0;
extern void *memset(void *p, int c, unsigned int n);
extern int func_02FC68(Info *i, O *o);
extern void func_178540(int a, O *o, void *p);
extern void func_0133E8(A *a, O *o, int x, int y);
extern void func_0970F8(T *t, A *a, V3 *p, V3 *q, unsigned f);
extern long long func_0285F0(void);
extern int func_177D80(int h, O *o, unsigned char *out);
extern unsigned char func_177A40(int h, O *o, int s, void *pos, void *dir, void *tab, int z);
extern char D_001733E0[];
extern char D_00173D08[];

static __inline__ void vadd(V3 *d, V3 *s, V3 *t)
{
    d->x = s->x + t->x;
    d->y = s->y + t->y;
    d->z = s->z + t->z;
}

int func_1718F8(O *o)
{
    A *a;
    C *c;
    D *d;
    E *e;
    Info *info;
    V3 p;
    V3 q;
    unsigned f;
    unsigned char k;
    int h;
    char *tab;
    int n;
    int off;
    float sp;

    o->w78 = (o->w78 & 0xFFF0FFFF) | 0x20000;
    a = o->a;
    info = o->info;
    memset(a, 0, 0x48);
    if (o->state >= 3) {
        return 0;
    }
    if (func_02FC68(info, o) == 0) {
        return 0;
    }
    if (info->w34 == 0) {
        return 0;
    }
    if (info->w30 != 0) {
        func_178540(info->w30, o, D_001733E0);
    }
    func_0133E8(a, o, 1, 0x1010);
    if (o->state != 2) {
        c = a->c;
        vadd(&p, &a->v8, &c->pos);
        vadd(&q, &a->v14, &c->pos);
        d = c->d;
        e = &d->tab[c->idx];
        f = (c->flags & 0x1420) | 1 | (e->w0C ? 0x80 : 0);
        if (e->w10)
            f |= 0x100;
        if (e->w14)
            f |= 0x200;
        if (d->b3F == 1)
            f |= 0x800;
        if ((c->flags >> 3) & 1)
            f |= 0x400;
        k = a->b20;
        a->b3 = k;
        func_0970F8(&D_00244FF8[k], a, &p, &q, f | a->h22);
    }
    o->b77 = 0x4B;
    o->d->tab[o->idx].f28 = 1.0f;
    if (info->b41 != 0) {
        info->b29 = 3;
    }
    tab = D_0022EB00;
    n = ((int (*)(void))func_0285F0)();
    off = n * 16 + 4;
    off += (D_0022F4F0 - 1) * 64;
    sp = *(float *)(tab + off);
    a->f40 = 3.0f;
    a->f2C = sp;
    a->b44 = 0xFF;
    a->w30 = 0;
    h = info->w38;
    if (h != 0) {
        if (func_177D80(h, o, &a->b47) == 0) {
            a->b47 = func_177A40(h, o, o->state, &o->pos30, &o->dir20, D_00173D08, 0);
        }
    }
    return 1;
}
