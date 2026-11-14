/* LEVEL_02:0x0AF948 -- placement copy of LEVEL_01_0A9038.c: when the pending flag is set, loads the saved matrix into matrix mode 5 and clears the flag; then refreshes the widgets and raises bit 1. */
extern unsigned char D_002110B8;
extern char D_0033ECD0[];
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(void *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void func_0A8540(void);
extern void func_0A7220(int bit);

void func_0AF948(void)
{
    if (D_002110B8 != 0) {
        Gum_MatrixMode(5);
        Gum_LoadMatrix(D_0033ECD0);
        Gum_UpdateMatrix();
        D_002110B8 = 0;
    }
    func_0A8540();
    func_0A7220(1);
}
