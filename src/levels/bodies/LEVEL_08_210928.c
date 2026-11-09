/* LEVEL_08:0x210928 -- placement copy of LEVEL_01_1D0E38.c: spawns six randomly tinted effects at table positions for each active slot, unless a state check says to skip. */

extern char D_002843D0[];
extern int D_00252B14;
extern unsigned int D_0023F334;
extern float D_002794F8[][3];

extern int rand(void);
extern int func_0703C8(void *g);
extern void func_137108(float *out, void *a0, float *in);
extern int func_0A13C8(int a0, int a1);
extern void func_0A2860(int a0, float *v, int a2, float f12, float f13, unsigned int a3, int t0);

static __inline__ void emit_1D0E38(float *pos, int g, unsigned int col)
{
    unsigned int j;
    unsigned int mask;

    for (j = 0; j < 1; j++) {
        mask = 1 << j;
        if (D_0023F334 & mask) {
            func_0A2860(func_0A13C8(j, 0), pos, g, 0.3f, 0.3f, col, 0);
        }
    }
}

void func_210928(void *a0)
{
    float v[3];
    unsigned int i;
    unsigned int col;

    if (func_0703C8(D_002843D0) != 0) {
        if ((*(unsigned long long *)(D_002843D0 + 0x960) & 0x80000000000ULL) == 0) {
            return;
        }
    }
    for (i = 0; i < 6; i++) {
        col = rand() % 0x333333 + 0xFF000000;
        func_137108(v, a0, D_002794F8[i]);
        emit_1D0E38(v, D_00252B14, col);
    }
}
