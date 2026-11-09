/* LEVEL_21:0x0A4CC0 -- placement copy of LEVEL_01_0C4678.c: copies a block of saved settings into the active settings. */
extern unsigned char D_00148B65;
extern int D_00148BEC;
extern int D_00148B58;
extern int D_00148B6C;
extern int D_00148BE8;
extern int D_00148BF0;
extern int D_00148B5C;
extern unsigned char D_00148B54;
extern unsigned char D_00148B52;
extern unsigned char D_00148B55;
extern int D_00155030;
extern int D_00155034;
extern int D_00155038;
extern unsigned char D_0015503C;
extern unsigned char D_0015503D;
extern int D_00155040;
extern int D_00155044;
extern int D_00155048;
extern unsigned char D_0015504C;
extern char D_00240C90[];
extern char D_00177FE0[];
extern char *strcpy(char *d, const char *s);

void func_0A4CC0(void)
{
    if (D_00148B65 != 0)
        D_00155030 = 0;
    else
        D_00155030 = D_00148BEC;
    D_00155034 = D_00148B58;
    strcpy(D_00240C90, D_00177FE0);
    D_0015503C = D_00148B54;
    D_0015503D = D_00148B52;
    D_00155040 = D_00148BE8;
    D_00155044 = D_00148BF0;
    D_00155048 = D_00148B6C;
    D_0015504C = D_00148B55;
    D_00155038 = D_00148B5C;
}
