/* LEVEL_15:0x089748 -- placement copy of LEVEL_01_0A8E80.c: loads a projection matrix shifted by an offset pair, then resets state. */
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_StoreMatrix(void *m) __asm__("StoreMatrix__Q34scee3Psp3GumP14ScePspFMatrix4");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void func_082528(void);
extern int g_AspectRatioID;
extern float D_00150D80[2];
extern float *D_00150D88;
extern unsigned char D_00150D78;
extern float *D_00150D70;
extern float *D_00150D74;
extern float D_00150CB0[16];
extern float D_00150CF0[16];
extern float D_00150D30[16];
extern float D_00150C70[16];
extern float D_0023F810[16];
extern int D_00150A6C;
extern int D_00150A68;
extern int D_00150A84;

#define FP(p, off) (*(float *)((char *)(p) + (off)))

void func_089748(int mode, float *offs)
{
    float b, a;

    D_00150D88 = offs ? offs : D_00150D80;
    Gum_MatrixMode(5);
    if (D_00150D78 == 0) {
        Gum_StoreMatrix(D_0023F810);
        D_00150D78 = 1;
    }
    if (mode == 3) {
        D_00150D70 = D_00150CF0;
        D_00150D74 = D_00150D30;
    } else {
        D_00150D70 = D_00150CB0;
        D_00150D74 = D_00150C70;
    }
    if (g_AspectRatioID == 0) {
        a = FP(D_00150D70, 0x30);
        b = FP(D_00150D70, 0x34);
        FP(D_00150D70, 0x30) = a + D_00150D88[0];
        FP(D_00150D70, 0x34) += D_00150D88[1];
        Gum_LoadMatrix(D_00150D70);
        FP(D_00150D70, 0x30) = a;
        FP(D_00150D70, 0x34) = b;
    } else {
        a = FP(D_00150D74, 0x30);
        b = FP(D_00150D74, 0x34);
        FP(D_00150D74, 0x30) = a + D_00150D88[0];
        FP(D_00150D74, 0x34) += D_00150D88[1];
        Gum_LoadMatrix(D_00150D74);
        FP(D_00150D74, 0x30) = a;
        FP(D_00150D74, 0x34) = b;
    }
    Gum_UpdateMatrix();
    func_082528();
    D_00150A6C = 0;
    D_00150A68 = 0;
    D_00150A84 = 0;
}
