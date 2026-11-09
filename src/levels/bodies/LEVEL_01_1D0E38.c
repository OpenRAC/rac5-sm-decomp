/* LEVEL_01:0x1D0E38 -- spawns six randomly tinted effects at table positions for each active slot, unless a state check says to skip. */

extern char D_00235140[];
extern int D_00209024;
extern unsigned int D_001F6474;
extern float D_0022A7E0[][3];

extern int rand(void);
extern int func_06AB80(void *g);
extern void func_125E78(float *out, void *a0, float *in);
extern int func_099328(int a0, int a1);
extern void func_09A7C0(int a0, float *v, int a2, float f12, float f13, unsigned int a3, int t0);

static __inline__ void emit_1D0E38(float *pos, int g, unsigned int col)
{
    unsigned int j;
    unsigned int mask;

    for (j = 0; j < 1; j++) {
        mask = 1 << j;
        if (D_001F6474 & mask) {
            func_09A7C0(func_099328(j, 0), pos, g, 0.3f, 0.3f, col, 0);
        }
    }
}

void func_1D0E38(void *a0)
{
    float v[3];
    unsigned int i;
    unsigned int col;

    if (func_06AB80(D_00235140) != 0) {
        if ((*(unsigned long long *)(D_00235140 + 0x960) & 0x80000000000ULL) == 0) {
            return;
        }
    }
    for (i = 0; i < 6; i++) {
        col = rand() % 0x333333 + 0xFF000000;
        func_125E78(v, a0, D_0022A7E0[i]);
        emit_1D0E38(v, D_00209024, col);
    }
}
