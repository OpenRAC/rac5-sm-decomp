/* LEVEL_03:0x0C4460 -- placement copy of LEVEL_01_0C4678.c: copies a block of saved settings into the active settings. */
extern unsigned char D_0020C565;
extern int D_0020C5EC;
extern int D_0020C558;
extern int D_0020C56C;
extern int D_0020C5E8;
extern int D_0020C5F0;
extern int D_0020C55C;
extern unsigned char D_0020C554;
extern unsigned char D_0020C552;
extern unsigned char D_0020C555;
extern int D_00218A30;
extern int D_00218A34;
extern int D_00218A38;
extern unsigned char D_00218A3C;
extern unsigned char D_00218A3D;
extern int D_00218A40;
extern int D_00218A44;
extern int D_00218A48;
extern unsigned char D_00218A4C;
extern char D_003442D0[];
extern char D_0024ACE0[];
extern char *strcpy(char *d, const char *s);

void func_0C4460(void)
{
    if (D_0020C565 != 0)
        D_00218A30 = 0;
    else
        D_00218A30 = D_0020C5EC;
    D_00218A34 = D_0020C558;
    strcpy(D_003442D0, D_0024ACE0);
    D_00218A3C = D_0020C554;
    D_00218A3D = D_0020C552;
    D_00218A40 = D_0020C5E8;
    D_00218A44 = D_0020C5F0;
    D_00218A48 = D_0020C56C;
    D_00218A4C = D_0020C555;
    D_00218A38 = D_0020C55C;
}
