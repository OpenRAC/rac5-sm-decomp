/* LEVEL_20:0x044CC0 -- placement copy of LEVEL_01_050F30.c: when the object's mode halfword differs from the global mode word and the global mode is 3, sets a state word, starts a timed helper and, when a configuration record exists, a second helper with its floats; then adopts the global mode halfword. */
typedef struct { float f14; float f18; float f1C; float f20; } CfgFloats;
typedef struct { char pad00[0x14]; CfgFloats f; } Cfg;
typedef struct {
    char pad00[0x24];
    union {
        int w;
        unsigned short h;
    } mode;
    char pad28[0xC];
    int w34;
} Global;
typedef struct { char pad00[0x108]; unsigned short mode; char pad10A[0x262]; int w36C; char pad370[0x22C]; int w59C; } Obj;

extern Global D_00142F28;
extern Cfg *D_00104824;
extern void func_05ECB0(int a, int b, int c, int d, float e, float f);
extern void func_0624D8(int a0, Cfg *c, int *p, int a3, int t0, int t1, int t2, int t3, float f0, float f1, float f2, float f3);

static __inline__ void Fire(int a, int *p)
{
    if (D_00104824 != 0) {
        func_0624D8(a, D_00104824, p, 0, 0, 0, 0, 1,
                    D_00104824->f.f14, D_00104824->f.f18, D_00104824->f.f1C, D_00104824->f.f20);
    }
}

void func_044CC0(Obj *o)
{
    Global *g = &D_00142F28;

    if (o->mode != g->mode.w) {
        if (g->mode.w == 3) {
            o->w36C = 0x21;
            func_05ECB0(o->w59C, 0x21, 0, 1, 0.3f, 0.0f);
            Fire(o->w59C, &g->w34);
        }
        o->mode = D_00142F28.mode.h;
    }
}
