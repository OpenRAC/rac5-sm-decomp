/* LEVEL_24:0x0A0398 -- placement copy of LEVEL_16_095A68.c: placement copy of LEVEL_01_0A6B20.c: one-time init that clears a buffer and runs a setup call. */
extern unsigned char D_001C755C;
extern unsigned char D_001C7568;
extern unsigned char D_001C7569;
extern char D_0027F3C0[0x800];
extern char D_002E9420[];
extern char D_001E1EF8[];
extern void *memset(void *p, int c, unsigned int n);
extern int func_0A0218(int a);
extern int func_0A1430(int a, float *b);
extern int func_0A0590(int a, int b);
extern int func_0A02E8(int a, int b);
extern int func_1276C8(char *a, char *b, int c, char *d);

int func_0A0398(int a, float *b)
{
    int r;
    if (func_0A0218(a) && D_001C755C == 0) {
        r = func_0A1430(a, b);
        if (func_0A0590(a, r) && func_0A02E8(a, r)) {
            D_001C7568 = 1;
            D_001C7569 = 1;
            D_001C755C = 1;
            memset(D_0027F3C0, 0, 0x800);
            return func_1276C8(D_002E9420, D_0027F3C0, 0x148, D_001E1EF8) != 0;
        }
    }
    return 0;
}
