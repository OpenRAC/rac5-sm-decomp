/* LEVEL_02:0x0AD430 -- placement copy of LEVEL_16_095A68.c: placement copy of LEVEL_01_0A6B20.c: one-time init that clears a buffer and runs a setup call. */
extern unsigned char D_0020B89C;
extern unsigned char D_0020B8A8;
extern unsigned char D_0020B8A9;
extern char D_002CAA00[0x800];
extern char D_00334A60[];
extern char D_002260F8[];
extern void *memset(void *p, int c, unsigned int n);
extern int func_0AD2B0(int a);
extern int func_0AE4C8(int a, float *b);
extern int func_0AD628(int a, int b);
extern int func_0AD380(int a, int b);
extern int func_137F78(char *a, char *b, int c, char *d);

int func_0AD430(int a, float *b)
{
    int r;
    if (func_0AD2B0(a) && D_0020B89C == 0) {
        r = func_0AE4C8(a, b);
        if (func_0AD628(a, r) && func_0AD380(a, r)) {
            D_0020B8A8 = 1;
            D_0020B8A9 = 1;
            D_0020B89C = 1;
            memset(D_002CAA00, 0, 0x800);
            return func_137F78(D_00334A60, D_002CAA00, 0x148, D_002260F8) != 0;
        }
    }
    return 0;
}
