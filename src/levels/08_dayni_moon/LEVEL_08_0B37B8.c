/* LEVEL_08:0x0B37B8 -- placement copy of LEVEL_01_0A8E80.c: loads a projection matrix shifted by an offset pair, then resets state. */
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_StoreMatrix(void *m) __asm__("StoreMatrix__Q34scee3Psp3GumP14ScePspFMatrix4");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void func_0AC528(void);
extern int g_AspectRatioID;
extern float D_00244FC0[2];
extern float *D_00244FC8;
extern unsigned char D_00244FB8;
extern float *D_00244FB0;
extern float *D_00244FB4;
extern float D_00244EF0[16];
extern float D_00244F30[16];
extern float D_00244F70[16];
extern float D_00244EB0[16];
extern float D_00376A50[16];
extern int D_00244CAC;
extern int D_00244CA8;
extern int D_00244CC4;

#define FP(p, off) (*(float *)((char *)(p) + (off)))

void func_0B37B8(int mode, float *offs)
{
    float b, a;

    D_00244FC8 = offs ? offs : D_00244FC0;
    Gum_MatrixMode(5);
    if (D_00244FB8 == 0) {
        Gum_StoreMatrix(D_00376A50);
        D_00244FB8 = 1;
    }
    if (mode == 3) {
        D_00244FB0 = D_00244F30;
        D_00244FB4 = D_00244F70;
    } else {
        D_00244FB0 = D_00244EF0;
        D_00244FB4 = D_00244EB0;
    }
    if (g_AspectRatioID == 0) {
        a = FP(D_00244FB0, 0x30);
        b = FP(D_00244FB0, 0x34);
        FP(D_00244FB0, 0x30) = a + D_00244FC8[0];
        FP(D_00244FB0, 0x34) += D_00244FC8[1];
        Gum_LoadMatrix(D_00244FB0);
        FP(D_00244FB0, 0x30) = a;
        FP(D_00244FB0, 0x34) = b;
    } else {
        a = FP(D_00244FB4, 0x30);
        b = FP(D_00244FB4, 0x34);
        FP(D_00244FB4, 0x30) = a + D_00244FC8[0];
        FP(D_00244FB4, 0x34) += D_00244FC8[1];
        Gum_LoadMatrix(D_00244FB4);
        FP(D_00244FB4, 0x30) = a;
        FP(D_00244FB4, 0x34) = b;
    }
    Gum_UpdateMatrix();
    func_0AC528();
    D_00244CAC = 0;
    D_00244CA8 = 0;
    D_00244CC4 = 0;
}
