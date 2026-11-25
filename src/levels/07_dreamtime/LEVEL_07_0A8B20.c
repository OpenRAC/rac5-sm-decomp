/* LEVEL_07:0x0A8B20 -- placement copy of LEVEL_16_095A68.c: placement copy of LEVEL_01_0A6B20.c: one-time init that clears a buffer and runs a setup call. */
extern unsigned char D_0020ABDC;
extern unsigned char D_0020ABE8;
extern unsigned char D_0020ABE9;
extern char D_002C8E00[0x800];
extern char D_00332E60[];
extern char D_00225E78[];
extern void *memset(void *p, int c, unsigned int n);
extern int func_0A89A0(int a);
extern int func_0A9BB8(int a, float *b);
extern int func_0A8D18(int a, int b);
extern int func_0A8A70(int a, int b);
extern int func_134BC8(char *a, char *b, int c, char *d);

int func_0A8B20(int a, float *b)
{
    int r;
    if (func_0A89A0(a) && D_0020ABDC == 0) {
        r = func_0A9BB8(a, b);
        if (func_0A8D18(a, r) && func_0A8A70(a, r)) {
            D_0020ABE8 = 1;
            D_0020ABE9 = 1;
            D_0020ABDC = 1;
            memset(D_002C8E00, 0, 0x800);
            return func_134BC8(D_00332E60, D_002C8E00, 0x148, D_00225E78) != 0;
        }
    }
    return 0;
}
