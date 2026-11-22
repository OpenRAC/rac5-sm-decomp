/* LEVEL_03:0x05A5D8 -- when the global flags are set, starts the pending effect once (reset sequence with four callbacks) and while its timer is active eases the owner's value down, clamped at zero. */
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

extern unsigned char D_0020CEB4;
extern State D_00253D90;
extern World D_0024FFC0;

extern void func_03A0C0(World *w);
extern void func_0038F0(void *p, int a, int b, float f);
extern void func_003720(int a, float f0, float f1, int b);
extern void func_003750(int a, float f0, float f1, int b);
extern void func_003870(int a, float f0, float f1, int b);
extern void func_003BD8(int a);

void func_05A5D8(void)
{
    Target *t;
    float v;
    float z;
    float *pv;
    float *pz;
    float *p;

    if (D_0020CEB4 == 0) {
        return;
    }
    if (D_00253D90.b04 == 0) {
        return;
    }
    if (D_0024FFC0.h100 == 0x37) {
        D_00253D90.b05 = 1;
    }
    if (D_00253D90.b05 == 0) {
        func_03A0C0(&D_0024FFC0);
        func_0038F0(D_00253D90.blk08, 0, 2, 1.0f);
        func_003720(0, D_00253D90.f14, 1.0f, 1);
        func_003750(0, D_00253D90.f18, 1.0f, 1);
        func_003870(0, D_00253D90.f1C, 1.0f, 1);
    }
    if (D_00253D90.b20 != 0) {
        t = D_0024FFC0.target;
        if (t != 0) {
            v = t->f14 - 0.20000000298023224f;
            z = 0.0f;
            pv = &v;
            pz = &z;
            p = (z < v) ? pv : pz;
            t->f14 = *p;
        }
    }
    func_003BD8(0);
}
