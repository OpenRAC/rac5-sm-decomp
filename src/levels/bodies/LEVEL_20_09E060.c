/* LEVEL_20:0x09E060 -- placement copy of LEVEL_01_0C4678.c: copies a block of saved settings into the active settings. */
extern unsigned char D_001040CD;
extern int D_00104154;
extern int D_001040C0;
extern int D_001040D4;
extern int D_00104150;
extern int D_00104158;
extern int D_001040C4;
extern unsigned char D_001040BC;
extern unsigned char D_001040BA;
extern unsigned char D_001040BD;
extern int D_00110B08;
extern int D_00110B0C;
extern int D_00110B10;
extern unsigned char D_00110B14;
extern unsigned char D_00110B15;
extern int D_00110B18;
extern int D_00110B1C;
extern int D_00110B20;
extern unsigned char D_00110B24;
extern char D_0019ABD0[];
extern char D_001364E0[];
extern char *strcpy(char *d, const char *s);

void func_09E060(void)
{
    if (D_001040CD != 0)
        D_00110B08 = 0;
    else
        D_00110B08 = D_00104154;
    D_00110B0C = D_001040C0;
    strcpy(D_0019ABD0, D_001364E0);
    D_00110B14 = D_001040BC;
    D_00110B15 = D_001040BA;
    D_00110B18 = D_00104150;
    D_00110B1C = D_00104158;
    D_00110B20 = D_001040D4;
    D_00110B24 = D_001040BD;
    D_00110B10 = D_001040C4;
}
