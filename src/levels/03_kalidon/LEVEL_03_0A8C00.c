/* LEVEL_03:0x0A8C00 -- placement copy of LEVEL_01_0A8E80.c: loads a projection matrix shifted by an offset pair, then resets state. */
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_StoreMatrix(void *m) __asm__("StoreMatrix__Q34scee3Psp3GumP14ScePspFMatrix4");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void func_0A19B0(void);
extern int g_AspectRatioID;
extern float D_00214780[2];
extern float *D_00214788;
extern unsigned char D_00214778;
extern float *D_00214770;
extern float *D_00214774;
extern float D_002146B0[16];
extern float D_002146F0[16];
extern float D_00214730[16];
extern float D_00214670[16];
extern float D_00342650[16];
extern int D_0021446C;
extern int D_00214468;
extern int D_00214484;

#define FP(p, off) (*(float *)((char *)(p) + (off)))

void func_0A8C00(int mode, float *offs)
{
    float b, a;

    D_00214788 = offs ? offs : D_00214780;
    Gum_MatrixMode(5);
    if (D_00214778 == 0) {
        Gum_StoreMatrix(D_00342650);
        D_00214778 = 1;
    }
    if (mode == 3) {
        D_00214770 = D_002146F0;
        D_00214774 = D_00214730;
    } else {
        D_00214770 = D_002146B0;
        D_00214774 = D_00214670;
    }
    if (g_AspectRatioID == 0) {
        a = FP(D_00214770, 0x30);
        b = FP(D_00214770, 0x34);
        FP(D_00214770, 0x30) = a + D_00214788[0];
        FP(D_00214770, 0x34) += D_00214788[1];
        Gum_LoadMatrix(D_00214770);
        FP(D_00214770, 0x30) = a;
        FP(D_00214770, 0x34) = b;
    } else {
        a = FP(D_00214774, 0x30);
        b = FP(D_00214774, 0x34);
        FP(D_00214774, 0x30) = a + D_00214788[0];
        FP(D_00214774, 0x34) += D_00214788[1];
        Gum_LoadMatrix(D_00214774);
        FP(D_00214774, 0x30) = a;
        FP(D_00214774, 0x34) = b;
    }
    Gum_UpdateMatrix();
    func_0A19B0();
    D_0021446C = 0;
    D_00214468 = 0;
    D_00214484 = 0;
}
