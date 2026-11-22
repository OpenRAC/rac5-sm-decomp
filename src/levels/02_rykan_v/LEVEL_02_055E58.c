/* LEVEL_02:0x055E58 -- placement copy of LEVEL_01_050F30.c: when the object's mode halfword differs from the global mode word and the global mode is 3, sets a state word, starts a timed helper and, when a configuration record exists, a second helper with its floats; then adopts the global mode halfword. */
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

extern Global D_002501D8;
extern Cfg *D_002095CC;
extern void func_0835F8(int a, int b, int c, int d, float e, float f);
extern void func_0872A0(int a0, Cfg *c, int *p, int a3, int t0, int t1, int t2, int t3, float f0, float f1, float f2, float f3);

static __inline__ void Fire(int a, int *p)
{
    if (D_002095CC != 0) {
        func_0872A0(a, D_002095CC, p, 0, 0, 0, 0, 1,
                    D_002095CC->f.f14, D_002095CC->f.f18, D_002095CC->f.f1C, D_002095CC->f.f20);
    }
}

void func_055E58(Obj *o)
{
    Global *g = &D_002501D8;

    if (o->mode != g->mode.w) {
        if (g->mode.w == 3) {
            o->w36C = 0x21;
            func_0835F8(o->w59C, 0x21, 0, 1, 0.3f, 0.0f);
            Fire(o->w59C, &g->w34);
        }
        o->mode = D_002501D8.mode.h;
    }
}
