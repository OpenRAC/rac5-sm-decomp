/* LEVEL_23:0x09FBF0 -- placement copy of LEVEL_01_0A8E80.c: loads a projection matrix shifted by an offset pair, then resets state. */
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_StoreMatrix(void *m) __asm__("StoreMatrix__Q34scee3Psp3GumP14ScePspFMatrix4");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void func_098970(void);
extern int g_AspectRatioID;
extern float D_001CF500[2];
extern float *D_001CF508;
extern unsigned char D_001CF4F8;
extern float *D_001CF4F0;
extern float *D_001CF4F4;
extern float D_001CF430[16];
extern float D_001CF470[16];
extern float D_001CF4B0[16];
extern float D_001CF3F0[16];
extern float D_002F8C10[16];
extern int D_001CF1EC;
extern int D_001CF1E8;
extern int D_001CF204;

#define FP(p, off) (*(float *)((char *)(p) + (off)))

void func_09FBF0(int mode, float *offs)
{
    float b, a;

    D_001CF508 = offs ? offs : D_001CF500;
    Gum_MatrixMode(5);
    if (D_001CF4F8 == 0) {
        Gum_StoreMatrix(D_002F8C10);
        D_001CF4F8 = 1;
    }
    if (mode == 3) {
        D_001CF4F0 = D_001CF470;
        D_001CF4F4 = D_001CF4B0;
    } else {
        D_001CF4F0 = D_001CF430;
        D_001CF4F4 = D_001CF3F0;
    }
    if (g_AspectRatioID == 0) {
        a = FP(D_001CF4F0, 0x30);
        b = FP(D_001CF4F0, 0x34);
        FP(D_001CF4F0, 0x30) = a + D_001CF508[0];
        FP(D_001CF4F0, 0x34) += D_001CF508[1];
        Gum_LoadMatrix(D_001CF4F0);
        FP(D_001CF4F0, 0x30) = a;
        FP(D_001CF4F0, 0x34) = b;
    } else {
        a = FP(D_001CF4F4, 0x30);
        b = FP(D_001CF4F4, 0x34);
        FP(D_001CF4F4, 0x30) = a + D_001CF508[0];
        FP(D_001CF4F4, 0x34) += D_001CF508[1];
        Gum_LoadMatrix(D_001CF4F4);
        FP(D_001CF4F4, 0x30) = a;
        FP(D_001CF4F4, 0x34) = b;
    }
    Gum_UpdateMatrix();
    func_098970();
    D_001CF1EC = 0;
    D_001CF1E8 = 0;
    D_001CF204 = 0;
}
