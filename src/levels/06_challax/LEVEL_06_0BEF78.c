/* LEVEL_06:0x0BEF78 -- placement copy of LEVEL_01_0C4678.c: copies a block of saved settings into the active settings. */
extern unsigned char D_001E2DE5;
extern int D_001E2E6C;
extern int D_001E2DD8;
extern int D_001E2DEC;
extern int D_001E2E68;
extern int D_001E2E70;
extern int D_001E2DDC;
extern unsigned char D_001E2DD4;
extern unsigned char D_001E2DD2;
extern unsigned char D_001E2DD5;
extern int D_001EF2B0;
extern int D_001EF2B4;
extern int D_001EF2B8;
extern unsigned char D_001EF2BC;
extern unsigned char D_001EF2BD;
extern int D_001EF2C0;
extern int D_001EF2C4;
extern int D_001EF2C8;
extern unsigned char D_001EF2CC;
extern char D_003161D0[];
extern char D_0021CBE0[];
extern char *strcpy(char *d, const char *s);

void func_0BEF78(void)
{
    if (D_001E2DE5 != 0)
        D_001EF2B0 = 0;
    else
        D_001EF2B0 = D_001E2E6C;
    D_001EF2B4 = D_001E2DD8;
    strcpy(D_003161D0, D_0021CBE0);
    D_001EF2BC = D_001E2DD4;
    D_001EF2BD = D_001E2DD2;
    D_001EF2C0 = D_001E2E68;
    D_001EF2C4 = D_001E2E70;
    D_001EF2C8 = D_001E2DEC;
    D_001EF2CC = D_001E2DD5;
    D_001EF2B8 = D_001E2DDC;
}
