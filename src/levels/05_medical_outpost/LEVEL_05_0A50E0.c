/* LEVEL_05:0x0A50E0 -- placement copy of LEVEL_16_095A68.c: placement copy of LEVEL_01_0A6B20.c: one-time init that clears a buffer and runs a setup call. */
extern unsigned char D_001E5C5C;
extern unsigned char D_001E5C68;
extern unsigned char D_001E5C69;
extern char D_0029F3C0[0x800];
extern char D_00309420[];
extern char D_00200078[];
extern void *memset(void *p, int c, unsigned int n);
extern int func_0A4F60(int a);
extern int func_0A6178(int a, float *b);
extern int func_0A52D8(int a, int b);
extern int func_0A5030(int a, int b);
extern int func_12D540(char *a, char *b, int c, char *d);

int func_0A50E0(int a, float *b)
{
    int r;
    if (func_0A4F60(a) && D_001E5C5C == 0) {
        r = func_0A6178(a, b);
        if (func_0A52D8(a, r) && func_0A5030(a, r)) {
            D_001E5C68 = 1;
            D_001E5C69 = 1;
            D_001E5C5C = 1;
            memset(D_0029F3C0, 0, 0x800);
            return func_12D540(D_00309420, D_0029F3C0, 0x148, D_00200078) != 0;
        }
    }
    return 0;
}
