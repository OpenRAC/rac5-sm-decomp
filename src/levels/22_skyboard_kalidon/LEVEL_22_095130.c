/* LEVEL_22:0x095130 -- placement copy of LEVEL_16_095A68.c: placement copy of LEVEL_01_0A6B20.c: one-time init that clears a buffer and runs a setup call. */
extern unsigned char D_00155C5C;
extern unsigned char D_00155C68;
extern unsigned char D_00155C69;
extern char D_002090C0[0x800];
extern char D_00273120[];
extern char D_0016E5F8[];
extern void *memset(void *p, int c, unsigned int n);
extern int func_094FB0(int a);
extern int func_0961C8(int a, float *b);
extern int func_095328(int a, int b);
extern int func_095080(int a, int b);
extern int func_109098(char *a, char *b, int c, char *d);

int func_095130(int a, float *b)
{
    int r;
    if (func_094FB0(a) && D_00155C5C == 0) {
        r = func_0961C8(a, b);
        if (func_095328(a, r) && func_095080(a, r)) {
            D_00155C68 = 1;
            D_00155C69 = 1;
            D_00155C5C = 1;
            memset(D_002090C0, 0, 0x800);
            return func_109098(D_00273120, D_002090C0, 0x148, D_0016E5F8) != 0;
        }
    }
    return 0;
}
