/* LEVEL_24:0x0A26F8 -- placement copy of LEVEL_01_0A8E80.c: loads a projection matrix shifted by an offset pair, then resets state. */
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_StoreMatrix(void *m) __asm__("StoreMatrix__Q34scee3Psp3GumP14ScePspFMatrix4");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void func_09B4A8(void);
extern int g_AspectRatioID;
extern float D_001CCD80[2];
extern float *D_001CCD88;
extern unsigned char D_001CCD78;
extern float *D_001CCD70;
extern float *D_001CCD74;
extern float D_001CCCB0[16];
extern float D_001CCCF0[16];
extern float D_001CCD30[16];
extern float D_001CCC70[16];
extern float D_002F3690[16];
extern int D_001CCA6C;
extern int D_001CCA68;
extern int D_001CCA84;

#define FP(p, off) (*(float *)((char *)(p) + (off)))

void func_0A26F8(int mode, float *offs)
{
    float b, a;

    D_001CCD88 = offs ? offs : D_001CCD80;
    Gum_MatrixMode(5);
    if (D_001CCD78 == 0) {
        Gum_StoreMatrix(D_002F3690);
        D_001CCD78 = 1;
    }
    if (mode == 3) {
        D_001CCD70 = D_001CCCF0;
        D_001CCD74 = D_001CCD30;
    } else {
        D_001CCD70 = D_001CCCB0;
        D_001CCD74 = D_001CCC70;
    }
    if (g_AspectRatioID == 0) {
        a = FP(D_001CCD70, 0x30);
        b = FP(D_001CCD70, 0x34);
        FP(D_001CCD70, 0x30) = a + D_001CCD88[0];
        FP(D_001CCD70, 0x34) += D_001CCD88[1];
        Gum_LoadMatrix(D_001CCD70);
        FP(D_001CCD70, 0x30) = a;
        FP(D_001CCD70, 0x34) = b;
    } else {
        a = FP(D_001CCD74, 0x30);
        b = FP(D_001CCD74, 0x34);
        FP(D_001CCD74, 0x30) = a + D_001CCD88[0];
        FP(D_001CCD74, 0x34) += D_001CCD88[1];
        Gum_LoadMatrix(D_001CCD74);
        FP(D_001CCD74, 0x30) = a;
        FP(D_001CCD74, 0x34) = b;
    }
    Gum_UpdateMatrix();
    func_09B4A8();
    D_001CCA6C = 0;
    D_001CCA68 = 0;
    D_001CCA84 = 0;
}
