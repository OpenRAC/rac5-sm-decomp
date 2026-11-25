/* LEVEL_15:0x0873E8 -- placement copy of LEVEL_16_095A68.c: placement copy of LEVEL_01_0A6B20.c: one-time init that clears a buffer and runs a setup call. */
extern unsigned char D_0014B55C;
extern unsigned char D_0014B568;
extern unsigned char D_0014B569;
extern char D_001CB540[0x800];
extern char D_002355A0[];
extern char D_001658F8[];
extern void *memset(void *p, int c, unsigned int n);
extern int func_087268(int a);
extern int func_088480(int a, float *b);
extern int func_0875E0(int a, int b);
extern int func_087338(int a, int b);
extern int func_0F0A90(char *a, char *b, int c, char *d);

int func_0873E8(int a, float *b)
{
    int r;
    if (func_087268(a) && D_0014B55C == 0) {
        r = func_088480(a, b);
        if (func_0875E0(a, r) && func_087338(a, r)) {
            D_0014B568 = 1;
            D_0014B569 = 1;
            D_0014B55C = 1;
            memset(D_001CB540, 0, 0x800);
            return func_0F0A90(D_002355A0, D_001CB540, 0x148, D_001658F8) != 0;
        }
    }
    return 0;
}
