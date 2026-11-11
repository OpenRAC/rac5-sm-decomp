/* LEVEL_22:0x13C428 -- placement copy of LEVEL_01_1D0E38.c: spawns six randomly tinted effects at table positions for each active slot, unless a state check says to skip. */

extern char D_00186D40[];
extern int D_00166944;
extern unsigned int D_001557F4;
extern float D_0017C878[][3];

extern int rand(void);
extern int func_060788(void *g);
extern void func_0FE030(float *out, void *a0, float *in);
extern int func_089FE8(int a0, int a1);
extern void func_08B480(int a0, float *v, int a2, float f12, float f13, unsigned int a3, int t0);

static __inline__ void emit_1D0E38(float *pos, int g, unsigned int col)
{
    unsigned int j;
    unsigned int mask;

    for (j = 0; j < 1; j++) {
        mask = 1 << j;
        if (D_001557F4 & mask) {
            func_08B480(func_089FE8(j, 0), pos, g, 0.3f, 0.3f, col, 0);
        }
    }
}

void func_13C428(void *a0)
{
    float v[3];
    unsigned int i;
    unsigned int col;

    if (func_060788(D_00186D40) != 0) {
        if ((*(unsigned long long *)(D_00186D40 + 0x960) & 0x80000000000ULL) == 0) {
            return;
        }
    }
    for (i = 0; i < 6; i++) {
        col = rand() % 0x333333 + 0xFF000000;
        func_0FE030(v, a0, D_0017C878[i]);
        emit_1D0E38(v, D_00166944, col);
    }
}
