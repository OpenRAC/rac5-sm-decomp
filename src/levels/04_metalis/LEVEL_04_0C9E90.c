/* LEVEL_04:0x0C9E90 -- placement copy of LEVEL_01_0C4678.c: copies a block of saved settings into the active settings. */
extern unsigned char D_0020D065;
extern int D_0020D0EC;
extern int D_0020D058;
extern int D_0020D06C;
extern int D_0020D0E8;
extern int D_0020D0F0;
extern int D_0020D05C;
extern unsigned char D_0020D054;
extern unsigned char D_0020D052;
extern unsigned char D_0020D055;
extern int D_00219870;
extern int D_00219874;
extern int D_00219878;
extern unsigned char D_0021987C;
extern unsigned char D_0021987D;
extern int D_00219880;
extern int D_00219884;
extern int D_00219888;
extern unsigned char D_0021988C;
extern char D_00343C50[];
extern char D_0024A660[];
extern char *strcpy(char *d, const char *s);

void func_0C9E90(void)
{
    if (D_0020D065 != 0)
        D_00219870 = 0;
    else
        D_00219870 = D_0020D0EC;
    D_00219874 = D_0020D058;
    strcpy(D_00343C50, D_0024A660);
    D_0021987C = D_0020D054;
    D_0021987D = D_0020D052;
    D_00219880 = D_0020D0E8;
    D_00219884 = D_0020D0F0;
    D_00219888 = D_0020D06C;
    D_0021988C = D_0020D055;
    D_00219878 = D_0020D05C;
}
