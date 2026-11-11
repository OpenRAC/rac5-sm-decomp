/* LEVEL_02:0x0828D0 -- placement copy of LEVEL_01_07BFE8.c: loads the level's projection and view matrices into
   the GUM stacks. */
typedef struct {
    float m[4][4];
} Matrix;

extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(const Matrix *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC14ScePspFMatrix4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");

extern Matrix D_00251BC0;
extern Matrix D_00251B80;

void DISPLAY_CommitView__Fv(void)
{
    Gum_MatrixMode(0);
    Gum_LoadMatrix(&D_00251BC0);
    Gum_MatrixMode(1);
    Gum_LoadMatrix(&D_00251B80);
    Gum_UpdateMatrix();
}
