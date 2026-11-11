/* LEVEL_04:0x0AE0D0 -- placement copy of LEVEL_01_0A8E80.c: loads a projection matrix shifted by an offset pair, then resets state. */
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_StoreMatrix(void *m) __asm__("StoreMatrix__Q34scee3Psp3GumP14ScePspFMatrix4");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void func_0A6E40(void);
extern int g_AspectRatioID;
extern float D_002155C0[2];
extern float *D_002155C8;
extern unsigned char D_002155B8;
extern float *D_002155B0;
extern float *D_002155B4;
extern float D_002154F0[16];
extern float D_00215530[16];
extern float D_00215570[16];
extern float D_002154B0[16];
extern float D_00341FD0[16];
extern int D_002152AC;
extern int D_002152A8;
extern int D_002152C4;

#define FP(p, off) (*(float *)((char *)(p) + (off)))

void func_0AE0D0(int mode, float *offs)
{
    float b, a;

    D_002155C8 = offs ? offs : D_002155C0;
    Gum_MatrixMode(5);
    if (D_002155B8 == 0) {
        Gum_StoreMatrix(D_00341FD0);
        D_002155B8 = 1;
    }
    if (mode == 3) {
        D_002155B0 = D_00215530;
        D_002155B4 = D_00215570;
    } else {
        D_002155B0 = D_002154F0;
        D_002155B4 = D_002154B0;
    }
    if (g_AspectRatioID == 0) {
        a = FP(D_002155B0, 0x30);
        b = FP(D_002155B0, 0x34);
        FP(D_002155B0, 0x30) = a + D_002155C8[0];
        FP(D_002155B0, 0x34) += D_002155C8[1];
        Gum_LoadMatrix(D_002155B0);
        FP(D_002155B0, 0x30) = a;
        FP(D_002155B0, 0x34) = b;
    } else {
        a = FP(D_002155B4, 0x30);
        b = FP(D_002155B4, 0x34);
        FP(D_002155B4, 0x30) = a + D_002155C8[0];
        FP(D_002155B4, 0x34) += D_002155C8[1];
        Gum_LoadMatrix(D_002155B4);
        FP(D_002155B4, 0x30) = a;
        FP(D_002155B4, 0x34) = b;
    }
    Gum_UpdateMatrix();
    func_0A6E40();
    D_002152AC = 0;
    D_002152A8 = 0;
    D_002152C4 = 0;
}
