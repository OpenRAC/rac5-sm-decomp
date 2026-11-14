/* LEVEL_04:0x0AE288 -- placement copy of LEVEL_01_0A9038.c: when the pending flag is set, loads the saved matrix into matrix mode 5 and clears the flag; then refreshes the widgets and raises bit 1. */
extern unsigned char D_002155B8;
extern char D_00341FD0[];
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(void *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void func_0A6E40(void);
extern void func_0A5B20(int bit);

void func_0AE288(void)
{
    if (D_002155B8 != 0) {
        Gum_MatrixMode(5);
        Gum_LoadMatrix(D_00341FD0);
        Gum_UpdateMatrix();
        D_002155B8 = 0;
    }
    func_0A6E40();
    func_0A5B20(1);
}
