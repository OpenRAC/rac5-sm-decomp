/* LEVEL_08:0x0B1418 -- placement copy of LEVEL_16_095A68.c: placement copy of LEVEL_01_0A6B20.c: one-time init that clears a buffer and runs a setup call. */
extern unsigned char D_0023F79C;
extern unsigned char D_0023F7A8;
extern unsigned char D_0023F7A9;
extern char D_00302780[0x800];
extern char D_0036C7E0[];
extern char D_0025ADF8[];
extern void *memset(void *p, int c, unsigned int n);
extern int func_0B1298(int a);
extern int func_0B24B0(int a, float *b);
extern int func_0B1610(int a, int b);
extern int func_0B1368(int a, int b);
extern int func_143100(char *a, char *b, int c, char *d);

int func_0B1418(int a, float *b)
{
    int r;
    if (func_0B1298(a) && D_0023F79C == 0) {
        r = func_0B24B0(a, b);
        if (func_0B1610(a, r) && func_0B1368(a, r)) {
            D_0023F7A8 = 1;
            D_0023F7A9 = 1;
            D_0023F79C = 1;
            memset(D_00302780, 0, 0x800);
            return func_143100(D_0036C7E0, D_00302780, 0x148, D_0025ADF8) != 0;
        }
    }
    return 0;
}
