/* LEVEL_22:0x097490 -- placement copy of LEVEL_01_0A8E80.c: loads a projection matrix shifted by an offset pair, then resets state. */
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_StoreMatrix(void *m) __asm__("StoreMatrix__Q34scee3Psp3GumP14ScePspFMatrix4");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void func_090240(void);
extern int g_AspectRatioID;
extern float D_0015B480[2];
extern float *D_0015B488;
extern unsigned char D_0015B478;
extern float *D_0015B470;
extern float *D_0015B474;
extern float D_0015B3B0[16];
extern float D_0015B3F0[16];
extern float D_0015B430[16];
extern float D_0015B370[16];
extern float D_0027D390[16];
extern int D_0015B16C;
extern int D_0015B168;
extern int D_0015B184;

#define FP(p, off) (*(float *)((char *)(p) + (off)))

void func_097490(int mode, float *offs)
{
    float b, a;

    D_0015B488 = offs ? offs : D_0015B480;
    Gum_MatrixMode(5);
    if (D_0015B478 == 0) {
        Gum_StoreMatrix(D_0027D390);
        D_0015B478 = 1;
    }
    if (mode == 3) {
        D_0015B470 = D_0015B3F0;
        D_0015B474 = D_0015B430;
    } else {
        D_0015B470 = D_0015B3B0;
        D_0015B474 = D_0015B370;
    }
    if (g_AspectRatioID == 0) {
        a = FP(D_0015B470, 0x30);
        b = FP(D_0015B470, 0x34);
        FP(D_0015B470, 0x30) = a + D_0015B488[0];
        FP(D_0015B470, 0x34) += D_0015B488[1];
        Gum_LoadMatrix(D_0015B470);
        FP(D_0015B470, 0x30) = a;
        FP(D_0015B470, 0x34) = b;
    } else {
        a = FP(D_0015B474, 0x30);
        b = FP(D_0015B474, 0x34);
        FP(D_0015B474, 0x30) = a + D_0015B488[0];
        FP(D_0015B474, 0x34) += D_0015B488[1];
        Gum_LoadMatrix(D_0015B474);
        FP(D_0015B474, 0x30) = a;
        FP(D_0015B474, 0x34) = b;
    }
    Gum_UpdateMatrix();
    func_090240();
    D_0015B16C = 0;
    D_0015B168 = 0;
    D_0015B184 = 0;
}
