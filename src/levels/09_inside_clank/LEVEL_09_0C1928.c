/* LEVEL_09:0x0C1928 -- placement copy of LEVEL_01_0C4678.c: copies a block of saved settings into the active settings. */
extern unsigned char D_001DDCE5;
extern int D_001DDD6C;
extern int D_001DDCD8;
extern int D_001DDCEC;
extern int D_001DDD68;
extern int D_001DDD70;
extern int D_001DDCDC;
extern unsigned char D_001DDCD4;
extern unsigned char D_001DDCD2;
extern unsigned char D_001DDCD5;
extern int D_001EA1B0;
extern int D_001EA1B4;
extern int D_001EA1B8;
extern unsigned char D_001EA1BC;
extern unsigned char D_001EA1BD;
extern int D_001EA1C0;
extern int D_001EA1C4;
extern int D_001EA1C8;
extern unsigned char D_001EA1CC;
extern char D_00310BD0[];
extern char D_002175E0[];
extern char *strcpy(char *d, const char *s);

void func_0C1928(void)
{
    if (D_001DDCE5 != 0)
        D_001EA1B0 = 0;
    else
        D_001EA1B0 = D_001DDD6C;
    D_001EA1B4 = D_001DDCD8;
    strcpy(D_00310BD0, D_002175E0);
    D_001EA1BC = D_001DDCD4;
    D_001EA1BD = D_001DDCD2;
    D_001EA1C0 = D_001DDD68;
    D_001EA1C4 = D_001DDD70;
    D_001EA1C8 = D_001DDCEC;
    D_001EA1CC = D_001DDCD5;
    D_001EA1B8 = D_001DDCDC;
}
