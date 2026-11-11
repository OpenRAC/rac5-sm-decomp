/* LEVEL_02:0x03C158 -- placement copy of LEVEL_01_037710.c: clears a character record, installs its default transform block and hooks up its first resource entry. */
typedef struct {
    float f[16];
} Blk;

typedef struct {
    int w0;
    char pad4[0xA];
    char b0E;
    char pad0F;
    int w10;
    int w14;
} Sub;

typedef struct {
    char pad0[0x40];
    int w40;
} Rec;

typedef struct {
    char pad0[0x80];
    Blk blk;
    char padC0[0x34];
    int wF4;
    int wF8;
    char padFC[0x49C];
    int w598;
    int w59C;
    int w5A0;
    int w5A4;
    int w5A8;
    int w5AC;
    int w5B0;
    int w5B4;
    int tab[6];
    int w5D0;
    int w5D4;
    int w5D8;
    int w5DC;
    int w5E0;
    int w5E4;
    int w5E8;
    char pad5EC[0x374];
    unsigned long long flags;
    char pad968[0x65C];
    int wFC4;
    int wFC8;
    char padFCC[4];
    Sub sub;
} Obj;

static __inline__ void InitSlot(Sub *s, int v)
{
    s->b0E = 2;
    s->w10 = v;
    s->w14 = 0;
}

extern Blk D_0022CD40;
extern int D_00208C2C[1];

extern void *memset(void *p, int v, unsigned int n);
extern void func_03CB30(Obj *p);
extern void func_023910(Obj *p);
extern Rec *func_024F88(int a, int b);
extern int *func_028750(int a);
extern int func_050F98(Obj *p, int a, int b);

void func_03C158(Obj *p)
{
    unsigned int i;
    int *q;
    Rec *r;
    int *e;
    int v;

    memset(p, 0, 0x39F0);
    p->wF8 = -1;
    p->wF4 = 0;
    func_03CB30(p);
    p->w59C = 0;
    p->w5A4 = 0;
    i = 0;
    q = p->tab;
    p->w5A8 = 0;
    do {
        *q = 0;
        i++;
        q++;
    } while (i < 6);
    p->w5A0 = 0;
    p->w5AC = 0;
    p->w5B0 = 0;
    p->flags = (p->flags & ~(1ULL << 55)) | (1ULL << 63);
    p->w5B4 = 0;
    p->w5D8 = 0;
    p->w598 = 0;
    p->w5DC = 0;
    p->w5E0 = 0;
    p->w5E4 = 0;
    p->w5E8 = 0;
    p->blk = D_0022CD40;
    func_023910(p);
    r = func_024F88(0xC, p->wF8);
    r->w40 = 0;
    InitSlot(&p->sub, p->w59C);
    p->sub.w0 = 0;
    if (D_00208C2C[0] != 0) {
        e = func_028750(*(int *)(D_00208C2C[0] + 0x1C74));
        if (e != 0) {
            v = *e;
            p->wFC8 = v;
            func_050F98(p, v, 1);
        } else {
            p->wFC8 = 0;
        }
    }
}
