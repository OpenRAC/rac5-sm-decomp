/* LEVEL_24:0x0552A8 -- placement copy of LEVEL_03_05A5D8.c: when the global flags are set, starts the pending effect once (reset sequence with four callbacks) and while its timer is active eases the owner's value down, clamped at zero. */
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

extern unsigned char D_001C54B4;
extern State D_00204E10;
extern World D_00201040;

extern void func_034EA8(World *w);
extern void func_0036C0(void *p, int a, int b, float f);
extern void func_0034F0(int a, float f0, float f1, int b);
extern void func_003520(int a, float f0, float f1, int b);
extern void func_003640(int a, float f0, float f1, int b);
extern void func_0039A8(int a);

void func_0552A8(void)
{
    Target *t;
    float v;
    float z;
    float *pv;
    float *pz;
    float *p;

    if (D_001C54B4 == 0) {
        return;
    }
    if (D_00204E10.b04 == 0) {
        return;
    }
    if (D_00201040.h100 == 0x37) {
        D_00204E10.b05 = 1;
    }
    if (D_00204E10.b05 == 0) {
        func_034EA8(&D_00201040);
        func_0036C0(D_00204E10.blk08, 0, 2, 1.0f);
        func_0034F0(0, D_00204E10.f14, 1.0f, 1);
        func_003520(0, D_00204E10.f18, 1.0f, 1);
        func_003640(0, D_00204E10.f1C, 1.0f, 1);
    }
    if (D_00204E10.b20 != 0) {
        t = D_00201040.target;
        if (t != 0) {
            v = t->f14 - 0.20000000298023224f;
            z = 0.0f;
            pv = &v;
            pz = &z;
            p = (z < v) ? pv : pz;
            t->f14 = *p;
        }
    }
    func_0039A8(0);
}
