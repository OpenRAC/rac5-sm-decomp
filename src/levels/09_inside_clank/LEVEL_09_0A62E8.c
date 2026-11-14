/* LEVEL_09:0x0A62E8 -- placement copy of LEVEL_01_0A9038.c: when the pending flag is set, loads the saved matrix into matrix mode 5 and clears the flag; then refreshes the widgets and raises bit 1. */
extern unsigned char D_001E5EF8;
extern char D_0030EF50[];
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(void *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void func_09EEE0(void);
extern void func_09DBC0(int bit);

void func_0A62E8(void)
{
    if (D_001E5EF8 != 0) {
        Gum_MatrixMode(5);
        Gum_LoadMatrix(D_0030EF50);
        Gum_UpdateMatrix();
        D_001E5EF8 = 0;
    }
    func_09EEE0();
    func_09DBC0(1);
}
