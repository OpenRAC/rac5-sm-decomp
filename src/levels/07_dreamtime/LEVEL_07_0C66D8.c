/* LEVEL_07:0x0C66D8 -- placement copy of LEVEL_01_0C4678.c: copies a block of saved settings into the active settings. */
extern unsigned char D_002081E5;
extern int D_0020826C;
extern int D_002081D8;
extern int D_002081EC;
extern int D_00208268;
extern int D_00208270;
extern int D_002081DC;
extern unsigned char D_002081D4;
extern unsigned char D_002081D2;
extern unsigned char D_002081D5;
extern int D_002146B0;
extern int D_002146B4;
extern int D_002146B8;
extern unsigned char D_002146BC;
extern unsigned char D_002146BD;
extern int D_002146C0;
extern int D_002146C4;
extern int D_002146C8;
extern unsigned char D_002146CC;
extern char D_0033ED50[];
extern char D_00245760[];
extern char *strcpy(char *d, const char *s);

void func_0C66D8(void)
{
    if (D_002081E5 != 0)
        D_002146B0 = 0;
    else
        D_002146B0 = D_0020826C;
    D_002146B4 = D_002081D8;
    strcpy(D_0033ED50, D_00245760);
    D_002146BC = D_002081D4;
    D_002146BD = D_002081D2;
    D_002146C0 = D_00208268;
    D_002146C4 = D_00208270;
    D_002146C8 = D_002081EC;
    D_002146CC = D_002081D5;
    D_002146B8 = D_002081DC;
}
