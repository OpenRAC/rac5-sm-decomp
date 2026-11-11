/* LEVEL_16:0x06F2D8 -- placement copy of LEVEL_01_07BFE8.c: loads the level's projection and view matrices into
   the GUM stacks. */
typedef struct {
    float m[4][4];
} Matrix;

extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(const Matrix *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC14ScePspFMatrix4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");

extern Matrix D_001ECD80;
extern Matrix D_001ECD40;

void DISPLAY_CommitView__Fv(void)
{
    Gum_MatrixMode(0);
    Gum_LoadMatrix(&D_001ECD80);
    Gum_MatrixMode(1);
    Gum_LoadMatrix(&D_001ECD40);
    Gum_UpdateMatrix();
}
