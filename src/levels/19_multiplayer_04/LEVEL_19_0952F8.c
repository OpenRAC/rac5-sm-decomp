/* LEVEL_19:0x0952F8 -- placement copy of LEVEL_16_095A68.c: placement copy of LEVEL_01_0A6B20.c: one-time init that clears a buffer and runs a setup call. */
extern unsigned char D_001A5A2C;
extern unsigned char D_001A5A38;
extern unsigned char D_001A5A39;
extern char D_0026B1D0[0x800];
extern char D_0026B9F8[];
extern char D_001C70A8[];
extern void *memset(void *p, int c, unsigned int n);
extern int func_0951A8(int a);
extern int func_095AD8(int a, float *b);
extern int func_095400(int a, int b);
extern int func_095248(int a, int b);
extern int func_10F0E8(char *a, char *b, int c, char *d);

int func_0952F8(int a, float *b)
{
    int r;
    if (func_0951A8(a) && D_001A5A2C == 0) {
        r = func_095AD8(a, b);
        if (func_095400(a, r) && func_095248(a, r)) {
            D_001A5A38 = 1;
            D_001A5A39 = 1;
            D_001A5A2C = 1;
            memset(D_0026B1D0, 0, 0x800);
            return func_10F0E8(D_0026B9F8, D_0026B1D0, 0x148, D_001C70A8) != 0;
        }
    }
    return 0;
}
