/* LEVEL_19:0x0B3408 -- placement copy of LEVEL_01_0C4678.c: copies a block of saved settings into the active settings. */
extern unsigned char D_001A2B6D;
extern int D_001A2BF4;
extern int D_001A2B60;
extern int D_001A2B74;
extern int D_001A2BF0;
extern int D_001A2BF8;
extern int D_001A2B64;
extern unsigned char D_001A2B5C;
extern unsigned char D_001A2B5A;
extern unsigned char D_001A2B5D;
extern int D_001AF5A8;
extern int D_001AF5AC;
extern int D_001AF5B0;
extern unsigned char D_001AF5B4;
extern unsigned char D_001AF5B5;
extern int D_001AF5B8;
extern int D_001AF5BC;
extern int D_001AF5C0;
extern unsigned char D_001AF5C4;
extern char D_00277510[];
extern char D_001DECE0[];
extern char *strcpy(char *d, const char *s);

void func_0B3408(void)
{
    if (D_001A2B6D != 0)
        D_001AF5A8 = 0;
    else
        D_001AF5A8 = D_001A2BF4;
    D_001AF5AC = D_001A2B60;
    strcpy(D_00277510, D_001DECE0);
    D_001AF5B4 = D_001A2B5C;
    D_001AF5B5 = D_001A2B5A;
    D_001AF5B8 = D_001A2BF0;
    D_001AF5BC = D_001A2BF8;
    D_001AF5C0 = D_001A2B74;
    D_001AF5C4 = D_001A2B5D;
    D_001AF5B0 = D_001A2B64;
}
