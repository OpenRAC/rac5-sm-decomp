/* LEVEL_24:0x0A28B0 -- placement copy of LEVEL_01_0A9038.c: when the pending flag is set, loads the saved matrix into matrix mode 5 and clears the flag; then refreshes the widgets and raises bit 1. */
extern unsigned char D_001CCD78;
extern char D_002F3690[];
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(void *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void func_09B4A8(void);
extern void func_09A188(int bit);

void func_0A28B0(void)
{
    if (D_001CCD78 != 0) {
        Gum_MatrixMode(5);
        Gum_LoadMatrix(D_002F3690);
        Gum_UpdateMatrix();
        D_001CCD78 = 0;
    }
    func_09B4A8();
    func_09A188(1);
}
