/* LEVEL_09:0x0A6130 -- placement copy of LEVEL_01_0A8E80.c: loads a projection matrix shifted by an offset pair, then resets state. */
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_StoreMatrix(void *m) __asm__("StoreMatrix__Q34scee3Psp3GumP14ScePspFMatrix4");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void func_09EEE0(void);
extern int g_AspectRatioID;
extern float D_001E5F00[2];
extern float *D_001E5F08;
extern unsigned char D_001E5EF8;
extern float *D_001E5EF0;
extern float *D_001E5EF4;
extern float D_001E5E30[16];
extern float D_001E5E70[16];
extern float D_001E5EB0[16];
extern float D_001E5DF0[16];
extern float D_0030EF50[16];
extern int D_001E5BEC;
extern int D_001E5BE8;
extern int D_001E5C04;

#define FP(p, off) (*(float *)((char *)(p) + (off)))

void func_0A6130(int mode, float *offs)
{
    float b, a;

    D_001E5F08 = offs ? offs : D_001E5F00;
    Gum_MatrixMode(5);
    if (D_001E5EF8 == 0) {
        Gum_StoreMatrix(D_0030EF50);
        D_001E5EF8 = 1;
    }
    if (mode == 3) {
        D_001E5EF0 = D_001E5E70;
        D_001E5EF4 = D_001E5EB0;
    } else {
        D_001E5EF0 = D_001E5E30;
        D_001E5EF4 = D_001E5DF0;
    }
    if (g_AspectRatioID == 0) {
        a = FP(D_001E5EF0, 0x30);
        b = FP(D_001E5EF0, 0x34);
        FP(D_001E5EF0, 0x30) = a + D_001E5F08[0];
        FP(D_001E5EF0, 0x34) += D_001E5F08[1];
        Gum_LoadMatrix(D_001E5EF0);
        FP(D_001E5EF0, 0x30) = a;
        FP(D_001E5EF0, 0x34) = b;
    } else {
        a = FP(D_001E5EF4, 0x30);
        b = FP(D_001E5EF4, 0x34);
        FP(D_001E5EF4, 0x30) = a + D_001E5F08[0];
        FP(D_001E5EF4, 0x34) += D_001E5F08[1];
        Gum_LoadMatrix(D_001E5EF4);
        FP(D_001E5EF4, 0x30) = a;
        FP(D_001E5EF4, 0x34) = b;
    }
    Gum_UpdateMatrix();
    func_09EEE0();
    D_001E5BEC = 0;
    D_001E5BE8 = 0;
    D_001E5C04 = 0;
}
