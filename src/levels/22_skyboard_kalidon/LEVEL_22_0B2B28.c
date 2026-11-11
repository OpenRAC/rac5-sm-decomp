/* LEVEL_22:0x0B2B28 -- placement copy of LEVEL_01_0C4678.c: copies a block of saved settings into the active settings. */
extern unsigned char D_00153265;
extern int D_001532EC;
extern int D_00153258;
extern int D_0015326C;
extern int D_001532E8;
extern int D_001532F0;
extern int D_0015325C;
extern unsigned char D_00153254;
extern unsigned char D_00153252;
extern unsigned char D_00153255;
extern int D_0015F730;
extern int D_0015F734;
extern int D_0015F738;
extern unsigned char D_0015F73C;
extern unsigned char D_0015F73D;
extern int D_0015F740;
extern int D_0015F744;
extern int D_0015F748;
extern unsigned char D_0015F74C;
extern char D_0027F010[];
extern char D_00181A60[];
extern char *strcpy(char *d, const char *s);

void func_0B2B28(void)
{
    if (D_00153265 != 0)
        D_0015F730 = 0;
    else
        D_0015F730 = D_001532EC;
    D_0015F734 = D_00153258;
    strcpy(D_0027F010, D_00181A60);
    D_0015F73C = D_00153254;
    D_0015F73D = D_00153252;
    D_0015F740 = D_001532E8;
    D_0015F744 = D_001532F0;
    D_0015F748 = D_0015326C;
    D_0015F74C = D_00153255;
    D_0015F738 = D_0015325C;
}
