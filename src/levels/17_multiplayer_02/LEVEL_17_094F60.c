/* LEVEL_17:0x094F60 -- placement copy of LEVEL_16_095A68.c: placement copy of LEVEL_01_0A6B20.c: one-time init that clears a buffer and runs a setup call. */
extern unsigned char D_00197EAC;
extern unsigned char D_00197EB8;
extern unsigned char D_00197EB9;
extern char D_0025C350[0x800];
extern char D_0025CB78[];
extern char D_001B9328[];
extern void *memset(void *p, int c, unsigned int n);
extern int func_094E10(int a);
extern int func_095740(int a, float *b);
extern int func_095068(int a, int b);
extern int func_094EB0(int a, int b);
extern int func_10DFC0(char *a, char *b, int c, char *d);

int func_094F60(int a, float *b)
{
    int r;
    if (func_094E10(a) && D_00197EAC == 0) {
        r = func_095740(a, b);
        if (func_095068(a, r) && func_094EB0(a, r)) {
            D_00197EB8 = 1;
            D_00197EB9 = 1;
            D_00197EAC = 1;
            memset(D_0025C350, 0, 0x800);
            return func_10DFC0(D_0025CB78, D_0025C350, 0x148, D_001B9328) != 0;
        }
    }
    return 0;
}
