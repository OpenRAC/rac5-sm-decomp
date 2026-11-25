/* LEVEL_23:0x09D890 -- placement copy of LEVEL_16_095A68.c: placement copy of LEVEL_01_0A6B20.c: one-time init that clears a buffer and runs a setup call. */
extern unsigned char D_001C9CDC;
extern unsigned char D_001C9CE8;
extern unsigned char D_001C9CE9;
extern char D_00284940[0x800];
extern char D_002EE9A0[];
extern char D_001E42F8[];
extern void *memset(void *p, int c, unsigned int n);
extern int func_09D710(int a);
extern int func_09E928(int a, float *b);
extern int func_09DA88(int a, int b);
extern int func_09D7E0(int a, int b);
extern int func_123340(char *a, char *b, int c, char *d);

int func_09D890(int a, float *b)
{
    int r;
    if (func_09D710(a) && D_001C9CDC == 0) {
        r = func_09E928(a, b);
        if (func_09DA88(a, r) && func_09D7E0(a, r)) {
            D_001C9CE8 = 1;
            D_001C9CE9 = 1;
            D_001C9CDC = 1;
            memset(D_00284940, 0, 0x800);
            return func_123340(D_002EE9A0, D_00284940, 0x148, D_001E42F8) != 0;
        }
    }
    return 0;
}
