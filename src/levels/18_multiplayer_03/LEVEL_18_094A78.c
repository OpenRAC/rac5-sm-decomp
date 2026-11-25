/* LEVEL_18:0x094A78 -- placement copy of LEVEL_16_095A68.c: placement copy of LEVEL_01_0A6B20.c: one-time init that clears a buffer and runs a setup call. */
extern unsigned char D_001A5D2C;
extern unsigned char D_001A5D38;
extern unsigned char D_001A5D39;
extern char D_0026B3D0[0x800];
extern char D_0026BBF8[];
extern char D_001C7428[];
extern void *memset(void *p, int c, unsigned int n);
extern int func_094928(int a);
extern int func_095258(int a, float *b);
extern int func_094B80(int a, int b);
extern int func_0949C8(int a, int b);
extern int func_10D6F8(char *a, char *b, int c, char *d);

int func_094A78(int a, float *b)
{
    int r;
    if (func_094928(a) && D_001A5D2C == 0) {
        r = func_095258(a, b);
        if (func_094B80(a, r) && func_0949C8(a, r)) {
            D_001A5D38 = 1;
            D_001A5D39 = 1;
            D_001A5D2C = 1;
            memset(D_0026B3D0, 0, 0x800);
            return func_10D6F8(D_0026BBF8, D_0026B3D0, 0x148, D_001C7428) != 0;
        }
    }
    return 0;
}
