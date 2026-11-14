/* LEVEL_20:0x081E20 -- placement copy of LEVEL_01_0A9038.c: when the pending flag is set, loads the saved matrix into matrix mode 5 and clears the flag; then refreshes the widgets and raises bit 1. */
extern unsigned char D_0010C818;
extern char D_00199320[];
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(void *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void func_07B588(void);
extern void func_07A2C8(int bit);

void func_081E20(void)
{
    if (D_0010C818 != 0) {
        Gum_MatrixMode(5);
        Gum_LoadMatrix(D_00199320);
        Gum_UpdateMatrix();
        D_0010C818 = 0;
    }
    func_07B588();
    func_07A2C8(1);
}
