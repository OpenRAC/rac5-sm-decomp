/* LEVEL_03:0x0A8DB8 -- placement copy of LEVEL_01_0A9038.c: when the pending flag is set, loads the saved matrix into matrix mode 5 and clears the flag; then refreshes the widgets and raises bit 1. */
extern unsigned char D_00214778;
extern char D_00342650[];
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(void *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void func_0A19B0(void);
extern void func_0A0690(int bit);

void func_0A8DB8(void)
{
    if (D_00214778 != 0) {
        Gum_MatrixMode(5);
        Gum_LoadMatrix(D_00342650);
        Gum_UpdateMatrix();
        D_00214778 = 0;
    }
    func_0A19B0();
    func_0A0690(1);
}
