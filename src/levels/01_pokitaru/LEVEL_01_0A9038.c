/* LEVEL_01:0x0A9038 -- when the pending flag is set, loads the saved matrix into matrix mode 5 and clears the flag; then refreshes the widgets and raises bit 1. */
extern unsigned char D_001FC0F8;
extern char D_003277D0[];
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(void *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void func_0A1C30(void);
extern void func_0A0908(int bit);

void func_0A9038(void)
{
    if (D_001FC0F8 != 0) {
        Gum_MatrixMode(5);
        Gum_LoadMatrix(D_003277D0);
        Gum_UpdateMatrix();
        D_001FC0F8 = 0;
    }
    func_0A1C30();
    func_0A0908(1);
}
