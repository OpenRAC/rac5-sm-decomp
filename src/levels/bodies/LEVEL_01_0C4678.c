/* LEVEL_01:0x0C4678 -- copies a block of saved settings into the active settings. */
extern unsigned char D_001F3EE5;
extern int D_001F3F6C;
extern int D_001F3ED8;
extern int D_001F3EEC;
extern int D_001F3F68;
extern int D_001F3F70;
extern int D_001F3EDC;
extern unsigned char D_001F3ED4;
extern unsigned char D_001F3ED2;
extern unsigned char D_001F3ED5;
extern int D_002003B0;
extern int D_002003B4;
extern int D_002003B8;
extern unsigned char D_002003BC;
extern unsigned char D_002003BD;
extern int D_002003C0;
extern int D_002003C4;
extern int D_002003C8;
extern unsigned char D_002003CC;
extern char D_00329450[];
extern char D_0022FE60[];
extern char *strcpy(char *d, const char *s);

void func_0C4678(void)
{
    if (D_001F3EE5 != 0)
        D_002003B0 = 0;
    else
        D_002003B0 = D_001F3F6C;
    D_002003B4 = D_001F3ED8;
    strcpy(D_00329450, D_0022FE60);
    D_002003BC = D_001F3ED4;
    D_002003BD = D_001F3ED2;
    D_002003C0 = D_001F3F68;
    D_002003C4 = D_001F3F70;
    D_002003C8 = D_001F3EEC;
    D_002003CC = D_001F3ED5;
    D_002003B8 = D_001F3EDC;
}
