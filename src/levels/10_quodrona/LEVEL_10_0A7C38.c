/* LEVEL_10:0x0A7C38 -- placement copy of LEVEL_16_095A68.c: placement copy of LEVEL_01_0A6B20.c: one-time init that clears a buffer and runs a setup call. */
extern unsigned char D_001FF8DC;
extern unsigned char D_001FF8E8;
extern unsigned char D_001FF8E9;
extern char D_002BC900[0x800];
extern char D_00326960[];
extern char D_0021A0F8[];
extern void *memset(void *p, int c, unsigned int n);
extern int func_0A7AB8(int a);
extern int func_0A8CD0(int a, float *b);
extern int func_0A7E30(int a, int b);
extern int func_0A7B88(int a, int b);
extern int func_12FA28(char *a, char *b, int c, char *d);

int func_0A7C38(int a, float *b)
{
    int r;
    if (func_0A7AB8(a) && D_001FF8DC == 0) {
        r = func_0A8CD0(a, b);
        if (func_0A7E30(a, r) && func_0A7B88(a, r)) {
            D_001FF8E8 = 1;
            D_001FF8E9 = 1;
            D_001FF8DC = 1;
            memset(D_002BC900, 0, 0x800);
            return func_12FA28(D_00326960, D_002BC900, 0x148, D_0021A0F8) != 0;
        }
    }
    return 0;
}
