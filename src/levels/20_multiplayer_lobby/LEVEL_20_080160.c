/* LEVEL_20:0x080160 -- placement copy of LEVEL_16_095A68.c: placement copy of LEVEL_01_0A6B20.c: one-time init that clears a buffer and runs a setup call. */
extern unsigned char D_00106F8C;
extern unsigned char D_00106F98;
extern unsigned char D_00106F99;
extern char D_0018E890[0x800];
extern char D_0018F0B8[];
extern char D_00126F28[];
extern void *memset(void *p, int c, unsigned int n);
extern int func_080010(int a);
extern int func_080940(int a, float *b);
extern int func_080268(int a, int b);
extern int func_0800B0(int a, int b);
extern int func_0E1830(char *a, char *b, int c, char *d);

int func_080160(int a, float *b)
{
    int r;
    if (func_080010(a) && D_00106F8C == 0) {
        r = func_080940(a, b);
        if (func_080268(a, r) && func_0800B0(a, r)) {
            D_00106F98 = 1;
            D_00106F99 = 1;
            D_00106F8C = 1;
            memset(D_0018E890, 0, 0x800);
            return func_0E1830(D_0018F0B8, D_0018E890, 0x148, D_00126F28) != 0;
        }
    }
    return 0;
}
