/* LEVEL_09:0x1B7D38 -- placement copy of LEVEL_01_1D0E38.c: spawns six randomly tinted effects at table positions for each active slot, unless a state check says to skip. */

extern char D_0021C8C0[];
extern int D_001F2CA4;
extern unsigned int D_001E0274;
extern float D_00211F50[][3];

extern int rand(void);
extern int func_067780(void *g);
extern void func_11EF40(float *out, void *a0, float *in);
extern int func_095BD8(int a0, int a1);
extern void func_097070(int a0, float *v, int a2, float f12, float f13, unsigned int a3, int t0);

static __inline__ void emit_1D0E38(float *pos, int g, unsigned int col)
{
    unsigned int j;
    unsigned int mask;

    for (j = 0; j < 1; j++) {
        mask = 1 << j;
        if (D_001E0274 & mask) {
            func_097070(func_095BD8(j, 0), pos, g, 0.3f, 0.3f, col, 0);
        }
    }
}

void func_1B7D38(void *a0)
{
    float v[3];
    unsigned int i;
    unsigned int col;

    if (func_067780(D_0021C8C0) != 0) {
        if ((*(unsigned long long *)(D_0021C8C0 + 0x960) & 0x80000000000ULL) == 0) {
            return;
        }
    }
    for (i = 0; i < 6; i++) {
        col = rand() % 0x333333 + 0xFF000000;
        func_11EF40(v, a0, D_00211F50[i]);
        emit_1D0E38(v, D_001F2CA4, col);
    }
}
