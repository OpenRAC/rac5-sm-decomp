/* LEVEL_03:0x1E15D0 -- placement copy of LEVEL_01_1D0E38.c: spawns six randomly tinted effects at table positions for each active slot, unless a state check says to skip. */

extern char D_0024FFC0[];
extern int D_00221EEC;
extern unsigned int D_0020EAF4;
extern float D_002451D8[][3];

extern int rand(void);
extern int func_069508(void *g);
extern void func_124060(float *out, void *a0, float *in);
extern int func_0990B0(int a0, int a1);
extern void func_09A548(int a0, float *v, int a2, float f12, float f13, unsigned int a3, int t0);

static __inline__ void emit_1D0E38(float *pos, int g, unsigned int col)
{
    unsigned int j;
    unsigned int mask;

    for (j = 0; j < 1; j++) {
        mask = 1 << j;
        if (D_0020EAF4 & mask) {
            func_09A548(func_0990B0(j, 0), pos, g, 0.3f, 0.3f, col, 0);
        }
    }
}

void func_1E15D0(void *a0)
{
    float v[3];
    unsigned int i;
    unsigned int col;

    if (func_069508(D_0024FFC0) != 0) {
        if ((*(unsigned long long *)(D_0024FFC0 + 0x960) & 0x80000000000ULL) == 0) {
            return;
        }
    }
    for (i = 0; i < 6; i++) {
        col = rand() % 0x333333 + 0xFF000000;
        func_124060(v, a0, D_002451D8[i]);
        emit_1D0E38(v, D_00221EEC, col);
    }
}
