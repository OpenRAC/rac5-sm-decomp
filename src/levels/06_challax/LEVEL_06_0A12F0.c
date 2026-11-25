/* LEVEL_06:0x0A12F0 -- placement copy of LEVEL_16_095A68.c: placement copy of LEVEL_01_0A6B20.c: one-time init that clears a buffer and runs a setup call. */
extern unsigned char D_001E57DC;
extern unsigned char D_001E57E8;
extern unsigned char D_001E57E9;
extern char D_002A0280[0x800];
extern char D_0030A2E0[];
extern char D_001FFFF8[];
extern void *memset(void *p, int c, unsigned int n);
extern int func_0A1170(int a);
extern int func_0A2388(int a, float *b);
extern int func_0A14E8(int a, int b);
extern int func_0A1240(int a, int b);
extern int func_128298(char *a, char *b, int c, char *d);

int func_0A12F0(int a, float *b)
{
    int r;
    if (func_0A1170(a) && D_001E57DC == 0) {
        r = func_0A2388(a, b);
        if (func_0A14E8(a, r) && func_0A1240(a, r)) {
            D_001E57E8 = 1;
            D_001E57E9 = 1;
            D_001E57DC = 1;
            memset(D_002A0280, 0, 0x800);
            return func_128298(D_0030A2E0, D_002A0280, 0x148, D_001FFFF8) != 0;
        }
    }
    return 0;
}
