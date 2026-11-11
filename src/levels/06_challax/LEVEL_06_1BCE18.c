/* LEVEL_06:0x1BCE18 -- placement copy of LEVEL_01_1D0E38.c: spawns six randomly tinted effects at table positions for each active slot, unless a state check says to skip. */

extern char D_00221EC0[];
extern int D_001F7EDC;
extern unsigned int D_001E5374;
extern float D_00217528[][3];

extern int rand(void);
extern int func_067940(void *g);
extern void func_11C388(float *out, void *a0, float *in);
extern int func_092038(int a0, int a1);
extern void func_0934D0(int a0, float *v, int a2, float f12, float f13, unsigned int a3, int t0);

static __inline__ void emit_1D0E38(float *pos, int g, unsigned int col)
{
    unsigned int j;
    unsigned int mask;

    for (j = 0; j < 1; j++) {
        mask = 1 << j;
        if (D_001E5374 & mask) {
            func_0934D0(func_092038(j, 0), pos, g, 0.3f, 0.3f, col, 0);
        }
    }
}

void func_1BCE18(void *a0)
{
    float v[3];
    unsigned int i;
    unsigned int col;

    if (func_067940(D_00221EC0) != 0) {
        if ((*(unsigned long long *)(D_00221EC0 + 0x960) & 0x80000000000ULL) == 0) {
            return;
        }
    }
    for (i = 0; i < 6; i++) {
        col = rand() % 0x333333 + 0xFF000000;
        func_11C388(v, a0, D_00217528[i]);
        emit_1D0E38(v, D_001F7EDC, col);
    }
}
