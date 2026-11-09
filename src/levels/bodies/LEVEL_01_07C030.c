/* LEVEL_01:0x07C030 -- loads four GS matrices in order, updating after each load. */
extern char D_0023A6B0[];
extern char D_0023A670[];
extern char D_00217DC0[];
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(const void *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC14ScePspFMatrix4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");

void func_07C030(void)
{
    char *p;

    Gum_MatrixMode(0);
    Gum_LoadMatrix(D_0023A6B0);
    Gum_UpdateMatrix();
    Gum_MatrixMode(1);
    Gum_LoadMatrix(D_0023A670);
    Gum_UpdateMatrix();
    p = D_00217DC0;
    Gum_MatrixMode(2);
    Gum_LoadMatrix(p);
    Gum_UpdateMatrix();
    Gum_MatrixMode(3);
    Gum_LoadMatrix(p);
    Gum_UpdateMatrix();
}
