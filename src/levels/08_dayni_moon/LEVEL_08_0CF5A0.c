/* LEVEL_08:0x0CF5A0 -- placement copy of LEVEL_01_0C4678.c: copies a block of saved settings into the active settings. */
extern unsigned char D_0023CA65;
extern int D_0023CAEC;
extern int D_0023CA58;
extern int D_0023CA6C;
extern int D_0023CAE8;
extern int D_0023CAF0;
extern int D_0023CA5C;
extern unsigned char D_0023CA54;
extern unsigned char D_0023CA52;
extern unsigned char D_0023CA55;
extern int D_00249270;
extern int D_00249274;
extern int D_00249278;
extern unsigned char D_0024927C;
extern unsigned char D_0024927D;
extern int D_00249280;
extern int D_00249284;
extern int D_00249288;
extern unsigned char D_0024928C;
extern char D_003786D0[];
extern char D_0027F0E0[];
extern char *strcpy(char *d, const char *s);

void func_0CF5A0(void)
{
    if (D_0023CA65 != 0)
        D_00249270 = 0;
    else
        D_00249270 = D_0023CAEC;
    D_00249274 = D_0023CA58;
    strcpy(D_003786D0, D_0027F0E0);
    D_0024927C = D_0023CA54;
    D_0024927D = D_0023CA52;
    D_00249280 = D_0023CAE8;
    D_00249284 = D_0023CAF0;
    D_00249288 = D_0023CA6C;
    D_0024928C = D_0023CA55;
    D_00249278 = D_0023CA5C;
}
