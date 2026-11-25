/* LEVEL_09:0x0A3DD0 -- placement copy of LEVEL_16_095A68.c: placement copy of LEVEL_01_0A6B20.c: one-time init that clears a buffer and runs a setup call. */
extern unsigned char D_001E06DC;
extern unsigned char D_001E06E8;
extern unsigned char D_001E06E9;
extern char D_0029AC80[0x800];
extern char D_00304CE0[];
extern char D_001FAD78[];
extern void *memset(void *p, int c, unsigned int n);
extern int func_0A3C50(int a);
extern int func_0A4E68(int a, float *b);
extern int func_0A3FC8(int a, int b);
extern int func_0A3D20(int a, int b);
extern int func_12AB60(char *a, char *b, int c, char *d);

int func_0A3DD0(int a, float *b)
{
    int r;
    if (func_0A3C50(a) && D_001E06DC == 0) {
        r = func_0A4E68(a, b);
        if (func_0A3FC8(a, r) && func_0A3D20(a, r)) {
            D_001E06E8 = 1;
            D_001E06E9 = 1;
            D_001E06DC = 1;
            memset(D_0029AC80, 0, 0x800);
            return func_12AB60(D_00304CE0, D_0029AC80, 0x148, D_001FAD78) != 0;
        }
    }
    return 0;
}
