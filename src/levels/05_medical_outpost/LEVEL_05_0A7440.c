/* LEVEL_05:0x0A7440 -- placement copy of LEVEL_01_0A8E80.c: loads a projection matrix shifted by an offset pair, then resets state. */
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_StoreMatrix(void *m) __asm__("StoreMatrix__Q34scee3Psp3GumP14ScePspFMatrix4");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void func_0A01F0(void);
extern int g_AspectRatioID;
extern float D_001EB480[2];
extern float *D_001EB488;
extern unsigned char D_001EB478;
extern float *D_001EB470;
extern float *D_001EB474;
extern float D_001EB3B0[16];
extern float D_001EB3F0[16];
extern float D_001EB430[16];
extern float D_001EB370[16];
extern float D_00313690[16];
extern int D_001EB16C;
extern int D_001EB168;
extern int D_001EB184;

#define FP(p, off) (*(float *)((char *)(p) + (off)))

void func_0A7440(int mode, float *offs)
{
    float b, a;

    D_001EB488 = offs ? offs : D_001EB480;
    Gum_MatrixMode(5);
    if (D_001EB478 == 0) {
        Gum_StoreMatrix(D_00313690);
        D_001EB478 = 1;
    }
    if (mode == 3) {
        D_001EB470 = D_001EB3F0;
        D_001EB474 = D_001EB430;
    } else {
        D_001EB470 = D_001EB3B0;
        D_001EB474 = D_001EB370;
    }
    if (g_AspectRatioID == 0) {
        a = FP(D_001EB470, 0x30);
        b = FP(D_001EB470, 0x34);
        FP(D_001EB470, 0x30) = a + D_001EB488[0];
        FP(D_001EB470, 0x34) += D_001EB488[1];
        Gum_LoadMatrix(D_001EB470);
        FP(D_001EB470, 0x30) = a;
        FP(D_001EB470, 0x34) = b;
    } else {
        a = FP(D_001EB474, 0x30);
        b = FP(D_001EB474, 0x34);
        FP(D_001EB474, 0x30) = a + D_001EB488[0];
        FP(D_001EB474, 0x34) += D_001EB488[1];
        Gum_LoadMatrix(D_001EB474);
        FP(D_001EB474, 0x30) = a;
        FP(D_001EB474, 0x34) = b;
    }
    Gum_UpdateMatrix();
    func_0A01F0();
    D_001EB16C = 0;
    D_001EB168 = 0;
    D_001EB184 = 0;
}
