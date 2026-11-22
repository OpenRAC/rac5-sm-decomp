/* LEVEL_08:0x061480 -- placement copy of LEVEL_03_05A5D8.c: when the global flags are set, starts the pending effect once (reset sequence with four callbacks) and while its timer is active eases the owner's value down, clamped at zero. */
typedef struct {
    char pad00[4];
    unsigned char b04;
    unsigned char b05;
    char pad06[2];
    char blk08[0xC];
    float f14;
    float f18;
    float f1C;
    unsigned char b20;
} State;

typedef struct {
    char pad00[0x14];
    float f14;
} Target;

typedef struct {
    char pad000[0x100];
    short h100;
    char pad102[0xCF0 - 0x102];
    Target *target;
} World;

extern unsigned char D_0023D6F4;
extern State D_002881A0;
extern World D_002843D0;

extern void func_040F08(World *w);
extern void func_0038E8(void *p, int a, int b, float f);
extern void func_003718(int a, float f0, float f1, int b);
extern void func_003748(int a, float f0, float f1, int b);
extern void func_003868(int a, float f0, float f1, int b);
extern void func_003C08(int a);

void func_061480(void)
{
    Target *t;
    float v;
    float z;
    float *pv;
    float *pz;
    float *p;

    if (D_0023D6F4 == 0) {
        return;
    }
    if (D_002881A0.b04 == 0) {
        return;
    }
    if (D_002843D0.h100 == 0x37) {
        D_002881A0.b05 = 1;
    }
    if (D_002881A0.b05 == 0) {
        func_040F08(&D_002843D0);
        func_0038E8(D_002881A0.blk08, 0, 2, 1.0f);
        func_003718(0, D_002881A0.f14, 1.0f, 1);
        func_003748(0, D_002881A0.f18, 1.0f, 1);
        func_003868(0, D_002881A0.f1C, 1.0f, 1);
    }
    if (D_002881A0.b20 != 0) {
        t = D_002843D0.target;
        if (t != 0) {
            v = t->f14 - 0.20000000298023224f;
            z = 0.0f;
            pv = &v;
            pz = &z;
            p = (z < v) ? pv : pz;
            t->f14 = *p;
        }
    }
    func_003C08(0);
}
