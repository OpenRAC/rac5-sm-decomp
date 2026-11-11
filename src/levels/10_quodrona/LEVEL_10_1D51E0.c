/* LEVEL_10:0x1D51E0 -- placement copy of LEVEL_01_1D0E38.c: spawns six randomly tinted effects at table positions for each active slot, unless a state check says to skip. */

extern char D_0023E540[];
extern int D_00211F9C;
extern unsigned int D_001FF474;
extern float D_002339A0[][3];

extern int rand(void);
extern int func_0699B0(void *g);
extern void func_123D68(float *out, void *a0, float *in);
extern int func_0997F0(int a0, int a1);
extern void func_09AC88(int a0, float *v, int a2, float f12, float f13, unsigned int a3, int t0);

static __inline__ void emit_1D0E38(float *pos, int g, unsigned int col)
{
    unsigned int j;
    unsigned int mask;

    for (j = 0; j < 1; j++) {
        mask = 1 << j;
        if (D_001FF474 & mask) {
            func_09AC88(func_0997F0(j, 0), pos, g, 0.3f, 0.3f, col, 0);
        }
    }
}

void func_1D51E0(void *a0)
{
    float v[3];
    unsigned int i;
    unsigned int col;

    if (func_0699B0(D_0023E540) != 0) {
        if ((*(unsigned long long *)(D_0023E540 + 0x960) & 0x80000000000ULL) == 0) {
            return;
        }
    }
    for (i = 0; i < 6; i++) {
        col = rand() % 0x333333 + 0xFF000000;
        func_123D68(v, a0, D_002339A0[i]);
        emit_1D0E38(v, D_00211F9C, col);
    }
}
