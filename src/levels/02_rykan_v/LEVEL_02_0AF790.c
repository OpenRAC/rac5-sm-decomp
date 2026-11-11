/* LEVEL_02:0x0AF790 -- placement copy of LEVEL_01_0A8E80.c: loads a projection matrix shifted by an offset pair, then resets state. */
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_StoreMatrix(void *m) __asm__("StoreMatrix__Q34scee3Psp3GumP14ScePspFMatrix4");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void func_0A8540(void);
extern int g_AspectRatioID;
extern float D_002110C0[2];
extern float *D_002110C8;
extern unsigned char D_002110B8;
extern float *D_002110B0;
extern float *D_002110B4;
extern float D_00210FF0[16];
extern float D_00211030[16];
extern float D_00211070[16];
extern float D_00210FB0[16];
extern float D_0033ECD0[16];
extern int D_00210DAC;
extern int D_00210DA8;
extern int D_00210DC4;

#define FP(p, off) (*(float *)((char *)(p) + (off)))

void func_0AF790(int mode, float *offs)
{
    float b, a;

    D_002110C8 = offs ? offs : D_002110C0;
    Gum_MatrixMode(5);
    if (D_002110B8 == 0) {
        Gum_StoreMatrix(D_0033ECD0);
        D_002110B8 = 1;
    }
    if (mode == 3) {
        D_002110B0 = D_00211030;
        D_002110B4 = D_00211070;
    } else {
        D_002110B0 = D_00210FF0;
        D_002110B4 = D_00210FB0;
    }
    if (g_AspectRatioID == 0) {
        a = FP(D_002110B0, 0x30);
        b = FP(D_002110B0, 0x34);
        FP(D_002110B0, 0x30) = a + D_002110C8[0];
        FP(D_002110B0, 0x34) += D_002110C8[1];
        Gum_LoadMatrix(D_002110B0);
        FP(D_002110B0, 0x30) = a;
        FP(D_002110B0, 0x34) = b;
    } else {
        a = FP(D_002110B4, 0x30);
        b = FP(D_002110B4, 0x34);
        FP(D_002110B4, 0x30) = a + D_002110C8[0];
        FP(D_002110B4, 0x34) += D_002110C8[1];
        Gum_LoadMatrix(D_002110B4);
        FP(D_002110B4, 0x30) = a;
        FP(D_002110B4, 0x34) = b;
    }
    Gum_UpdateMatrix();
    func_0A8540();
    D_00210DAC = 0;
    D_00210DA8 = 0;
    D_00210DC4 = 0;
}
