/* LEVEL_10:0x05AA20 -- placement copy of LEVEL_03_05A5D8.c: when the global flags are set, starts the pending effect once (reset sequence with four callbacks) and while its timer is active eases the owner's value down, clamped at zero. */
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

extern unsigned char D_001FD834;
extern State D_00242310;
extern World D_0023E540;

extern void func_03A4E8(World *w);
extern void func_003668(void *p, int a, int b, float f);
extern void func_003498(int a, float f0, float f1, int b);
extern void func_0034C8(int a, float f0, float f1, int b);
extern void func_0035E8(int a, float f0, float f1, int b);
extern void func_003960(int a);

void func_05AA20(void)
{
    Target *t;
    float v;
    float z;
    float *pv;
    float *pz;
    float *p;

    if (D_001FD834 == 0) {
        return;
    }
    if (D_00242310.b04 == 0) {
        return;
    }
    if (D_0023E540.h100 == 0x37) {
        D_00242310.b05 = 1;
    }
    if (D_00242310.b05 == 0) {
        func_03A4E8(&D_0023E540);
        func_003668(D_00242310.blk08, 0, 2, 1.0f);
        func_003498(0, D_00242310.f14, 1.0f, 1);
        func_0034C8(0, D_00242310.f18, 1.0f, 1);
        func_0035E8(0, D_00242310.f1C, 1.0f, 1);
    }
    if (D_00242310.b20 != 0) {
        t = D_0023E540.target;
        if (t != 0) {
            v = t->f14 - 0.20000000298023224f;
            z = 0.0f;
            pv = &v;
            pz = &z;
            p = (z < v) ? pv : pz;
            t->f14 = *p;
        }
    }
    func_003960(0);
}
