/* LEVEL_01:0x0A6B20 -- placement copy of LEVEL_16_095A68.c: placement copy of LEVEL_01_0A6B20.c: one-time init that clears a buffer and runs a setup call. */
extern unsigned char D_001F68DC;
extern unsigned char D_001F68E8;
extern unsigned char D_001F68E9;
extern char D_002B3500[0x800];
extern char D_0031D560[];
extern char D_00211178[];
extern void *memset(void *p, int c, unsigned int n);
extern int func_0A69A0(int a);
extern int func_0A7BB8(int a, float *b);
extern int func_0A6D18(int a, int b);
extern int func_0A6A70(int a, int b);
extern int func_131BC8(char *a, char *b, int c, char *d);

int func_0A6B20(int a, float *b)
{
    int r;
    if (func_0A69A0(a) && D_001F68DC == 0) {
        r = func_0A7BB8(a, b);
        if (func_0A6D18(a, r) && func_0A6A70(a, r)) {
            D_001F68E8 = 1;
            D_001F68E9 = 1;
            D_001F68DC = 1;
            memset(D_002B3500, 0, 0x800);
            return func_131BC8(D_0031D560, D_002B3500, 0x148, D_00211178) != 0;
        }
    }
    return 0;
}
