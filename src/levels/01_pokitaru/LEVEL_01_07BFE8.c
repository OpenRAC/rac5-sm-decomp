/* LEVEL_01:0x07BFE8 -- loads the level's projection and view matrices into
   the GUM stacks. */
typedef struct {
    float m[4][4];
} Matrix;

extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(const Matrix *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC14ScePspFMatrix4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");

extern Matrix D_0023A6B0;
extern Matrix D_0023A670;

void func_07BFE8(void)
{
    Gum_MatrixMode(0);
    Gum_LoadMatrix(&D_0023A6B0);
    Gum_MatrixMode(1);
    Gum_LoadMatrix(&D_0023A670);
    Gum_UpdateMatrix();
}
