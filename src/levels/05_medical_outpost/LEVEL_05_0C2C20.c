/* LEVEL_05:0x0C2C20 -- placement copy of LEVEL_01_0C4678.c: copies a block of saved settings into the active settings. */
extern unsigned char D_001E3265;
extern int D_001E32EC;
extern int D_001E3258;
extern int D_001E326C;
extern int D_001E32E8;
extern int D_001E32F0;
extern int D_001E325C;
extern unsigned char D_001E3254;
extern unsigned char D_001E3252;
extern unsigned char D_001E3255;
extern int D_001EF730;
extern int D_001EF734;
extern int D_001EF738;
extern unsigned char D_001EF73C;
extern unsigned char D_001EF73D;
extern int D_001EF740;
extern int D_001EF744;
extern int D_001EF748;
extern unsigned char D_001EF74C;
extern char D_00315310[];
extern char D_0021BB60[];
extern char *strcpy(char *d, const char *s);

void func_0C2C20(void)
{
    if (D_001E3265 != 0)
        D_001EF730 = 0;
    else
        D_001EF730 = D_001E32EC;
    D_001EF734 = D_001E3258;
    strcpy(D_00315310, D_0021BB60);
    D_001EF73C = D_001E3254;
    D_001EF73D = D_001E3252;
    D_001EF740 = D_001E32E8;
    D_001EF744 = D_001E32F0;
    D_001EF748 = D_001E326C;
    D_001EF74C = D_001E3255;
    D_001EF738 = D_001E325C;
}
