/* LEVEL_22:0x06EAF0 -- placement copy of LEVEL_01_07BFE8.c: loads the level's projection and view matrices into
   the GUM stacks. */
typedef struct {
    float m[4][4];
} Matrix;

extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(const Matrix *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC14ScePspFMatrix4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");

extern Matrix D_0018C2B0;
extern Matrix D_0018C270;

void func_06EAF0(void)
{
    Gum_MatrixMode(0);
    Gum_LoadMatrix(&D_0018C2B0);
    Gum_MatrixMode(1);
    Gum_LoadMatrix(&D_0018C270);
    Gum_UpdateMatrix();
}
