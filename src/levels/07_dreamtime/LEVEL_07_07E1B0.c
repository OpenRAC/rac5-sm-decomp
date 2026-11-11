/* LEVEL_07:0x07E1B0 -- placement copy of LEVEL_01_07C030.c: loads four GS matrices in order, updating after each load. */
extern char D_0024FFB0[];
extern char D_0024FF70[];
extern char D_0022CAC0[];
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(const void *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC14ScePspFMatrix4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");

void func_07E1B0(void)
{
    char *p;

    Gum_MatrixMode(0);
    Gum_LoadMatrix(D_0024FFB0);
    Gum_UpdateMatrix();
    Gum_MatrixMode(1);
    Gum_LoadMatrix(D_0024FF70);
    Gum_UpdateMatrix();
    p = D_0022CAC0;
    Gum_MatrixMode(2);
    Gum_LoadMatrix(p);
    Gum_UpdateMatrix();
    Gum_MatrixMode(3);
    Gum_LoadMatrix(p);
    Gum_UpdateMatrix();
}
