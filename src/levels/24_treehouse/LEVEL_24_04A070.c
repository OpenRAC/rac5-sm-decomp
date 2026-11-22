/* LEVEL_24:0x04A070 -- placement copy of LEVEL_01_050F30.c: when the object's mode halfword differs from the global mode word and the global mode is 3, sets a state word, starts a timed helper and, when a configuration record exists, a second helper with its floats; then adopts the global mode halfword. */
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

extern Global D_00204BC8;
extern Cfg *D_001C528C;
extern void func_077408(int a, int b, int c, int d, float e, float f);
extern void func_07B0B0(int a0, Cfg *c, int *p, int a3, int t0, int t1, int t2, int t3, float f0, float f1, float f2, float f3);

static __inline__ void Fire(int a, int *p)
{
    if (D_001C528C != 0) {
        func_07B0B0(a, D_001C528C, p, 0, 0, 0, 0, 1,
                    D_001C528C->f.f14, D_001C528C->f.f18, D_001C528C->f.f1C, D_001C528C->f.f20);
    }
}

void func_04A070(Obj *o)
{
    Global *g = &D_00204BC8;

    if (o->mode != g->mode.w) {
        if (g->mode.w == 3) {
            o->w36C = 0x21;
            func_077408(o->w59C, 0x21, 0, 1, 0.3f, 0.0f);
            Fire(o->w59C, &g->w34);
        }
        o->mode = D_00204BC8.mode.h;
    }
}
