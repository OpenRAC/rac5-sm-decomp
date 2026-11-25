/* LEVEL_03:0x0A68A0 -- placement copy of LEVEL_16_095A68.c: placement copy of LEVEL_01_0A6B20.c: one-time init that clears a buffer and runs a setup call. */
extern unsigned char D_0020EF5C;
extern unsigned char D_0020EF68;
extern unsigned char D_0020EF69;
extern char D_002CE380[0x800];
extern char D_003383E0[];
extern char D_0022A078[];
extern void *memset(void *p, int c, unsigned int n);
extern int func_0A6720(int a);
extern int func_0A7938(int a, float *b);
extern int func_0A6A98(int a, int b);
extern int func_0A67F0(int a, int b);
extern int func_12FF90(char *a, char *b, int c, char *d);

int func_0A68A0(int a, float *b)
{
    int r;
    if (func_0A6720(a) && D_0020EF5C == 0) {
        r = func_0A7938(a, b);
        if (func_0A6A98(a, r) && func_0A67F0(a, r)) {
            D_0020EF68 = 1;
            D_0020EF69 = 1;
            D_0020EF5C = 1;
            memset(D_002CE380, 0, 0x800);
            return func_12FF90(D_003383E0, D_002CE380, 0x148, D_0022A078) != 0;
        }
    }
    return 0;
}
