/* LEVEL_16:0x095A68 -- placement copy of LEVEL_01_0A6B20.c: one-time init that clears a buffer and runs a setup call. */
extern unsigned char D_001A48AC;
extern unsigned char D_001A48B8;
extern unsigned char D_001A48B9;
extern char D_0026B050[0x800];
extern char D_0026B878[];
extern char D_001C5EA8[];
extern void *memset(void *p, int c, unsigned int n);
extern int func_095918(int a);
extern int func_096248(int a, float *b);
extern int func_095B70(int a, int b);
extern int func_0959B8(int a, int b);
extern int func_10EA48(char *a, char *b, int c, char *d);

int func_095A68(int a, float *b)
{
    int r;
    if (func_095918(a) && D_001A48AC == 0) {
        r = func_096248(a, b);
        if (func_095B70(a, r) && func_0959B8(a, r)) {
            D_001A48B8 = 1;
            D_001A48B9 = 1;
            D_001A48AC = 1;
            memset(D_0026B050, 0, 0x800);
            return func_10EA48(D_0026B878, D_0026B050, 0x148, D_001C5EA8) != 0;
        }
    }
    return 0;
}
