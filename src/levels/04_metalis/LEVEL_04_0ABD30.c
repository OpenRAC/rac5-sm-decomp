/* LEVEL_04:0x0ABD30 -- placement copy of LEVEL_16_095A68.c: placement copy of LEVEL_01_0A6B20.c: one-time init that clears a buffer and runs a setup call. */
extern unsigned char D_0020FD9C;
extern unsigned char D_0020FDA8;
extern unsigned char D_0020FDA9;
extern char D_002CDD00[0x800];
extern char D_00337D60[];
extern char D_0022AAF8[];
extern void *memset(void *p, int c, unsigned int n);
extern int func_0ABBB0(int a);
extern int func_0ACDC8(int a, float *b);
extern int func_0ABF28(int a, int b);
extern int func_0ABC80(int a, int b);
extern int func_13E048(char *a, char *b, int c, char *d);

int func_0ABD30(int a, float *b)
{
    int r;
    if (func_0ABBB0(a) && D_0020FD9C == 0) {
        r = func_0ACDC8(a, b);
        if (func_0ABF28(a, r) && func_0ABC80(a, r)) {
            D_0020FDA8 = 1;
            D_0020FDA9 = 1;
            D_0020FD9C = 1;
            memset(D_002CDD00, 0, 0x800);
            return func_13E048(D_00337D60, D_002CDD00, 0x148, D_0022AAF8) != 0;
        }
    }
    return 0;
}
