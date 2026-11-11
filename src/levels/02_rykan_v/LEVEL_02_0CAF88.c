/* LEVEL_02:0x0CAF88 -- placement copy of LEVEL_01_0C4678.c: copies a block of saved settings into the active settings. */
extern unsigned char D_00208B65;
extern int D_00208BEC;
extern int D_00208B58;
extern int D_00208B6C;
extern int D_00208BE8;
extern int D_00208BF0;
extern int D_00208B5C;
extern unsigned char D_00208B54;
extern unsigned char D_00208B52;
extern unsigned char D_00208B55;
extern int D_00215370;
extern int D_00215374;
extern int D_00215378;
extern unsigned char D_0021537C;
extern unsigned char D_0021537D;
extern int D_00215380;
extern int D_00215384;
extern int D_00215388;
extern unsigned char D_0021538C;
extern char D_00340950[];
extern char D_00247360[];
extern char *strcpy(char *d, const char *s);

void func_0CAF88(void)
{
    if (D_00208B65 != 0)
        D_00215370 = 0;
    else
        D_00215370 = D_00208BEC;
    D_00215374 = D_00208B58;
    strcpy(D_00340950, D_00247360);
    D_0021537C = D_00208B54;
    D_0021537D = D_00208B52;
    D_00215380 = D_00208BE8;
    D_00215384 = D_00208BF0;
    D_00215388 = D_00208B6C;
    D_0021538C = D_00208B55;
    D_00215378 = D_00208B5C;
}
