/* LEVEL_04:0x07F4A8 -- placement copy of LEVEL_01_07C030.c: loads four GS matrices in order, updating after each load. */
extern char D_00254EC0[];
extern char D_00254E80[];
extern char D_00231740[];
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(const void *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC14ScePspFMatrix4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");

void func_07F4A8(void)
{
    char *p;

    Gum_MatrixMode(0);
    Gum_LoadMatrix(D_00254EC0);
    Gum_UpdateMatrix();
    Gum_MatrixMode(1);
    Gum_LoadMatrix(D_00254E80);
    Gum_UpdateMatrix();
    p = D_00231740;
    Gum_MatrixMode(2);
    Gum_LoadMatrix(p);
    Gum_UpdateMatrix();
    Gum_MatrixMode(3);
    Gum_LoadMatrix(p);
    Gum_UpdateMatrix();
}
