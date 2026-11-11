/* LEVEL_07:0x0AAE80 -- placement copy of LEVEL_01_0A8E80.c: loads a projection matrix shifted by an offset pair, then resets state. */
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_StoreMatrix(void *m) __asm__("StoreMatrix__Q34scee3Psp3GumP14ScePspFMatrix4");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void func_0A3C30(void);
extern int g_AspectRatioID;
extern float D_00210400[2];
extern float *D_00210408;
extern unsigned char D_002103F8;
extern float *D_002103F0;
extern float *D_002103F4;
extern float D_00210330[16];
extern float D_00210370[16];
extern float D_002103B0[16];
extern float D_002102F0[16];
extern float D_0033D0D0[16];
extern int D_002100EC;
extern int D_002100E8;
extern int D_00210104;

#define FP(p, off) (*(float *)((char *)(p) + (off)))

void func_0AAE80(int mode, float *offs)
{
    float b, a;

    D_00210408 = offs ? offs : D_00210400;
    Gum_MatrixMode(5);
    if (D_002103F8 == 0) {
        Gum_StoreMatrix(D_0033D0D0);
        D_002103F8 = 1;
    }
    if (mode == 3) {
        D_002103F0 = D_00210370;
        D_002103F4 = D_002103B0;
    } else {
        D_002103F0 = D_00210330;
        D_002103F4 = D_002102F0;
    }
    if (g_AspectRatioID == 0) {
        a = FP(D_002103F0, 0x30);
        b = FP(D_002103F0, 0x34);
        FP(D_002103F0, 0x30) = a + D_00210408[0];
        FP(D_002103F0, 0x34) += D_00210408[1];
        Gum_LoadMatrix(D_002103F0);
        FP(D_002103F0, 0x30) = a;
        FP(D_002103F0, 0x34) = b;
    } else {
        a = FP(D_002103F4, 0x30);
        b = FP(D_002103F4, 0x34);
        FP(D_002103F4, 0x30) = a + D_00210408[0];
        FP(D_002103F4, 0x34) += D_00210408[1];
        Gum_LoadMatrix(D_002103F4);
        FP(D_002103F4, 0x30) = a;
        FP(D_002103F4, 0x34) = b;
    }
    Gum_UpdateMatrix();
    func_0A3C30();
    D_002100EC = 0;
    D_002100E8 = 0;
    D_00210104 = 0;
}
