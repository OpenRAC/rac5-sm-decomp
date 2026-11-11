/* LEVEL_06:0x0A3650 -- placement copy of LEVEL_01_0A8E80.c: loads a projection matrix shifted by an offset pair, then resets state. */
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_StoreMatrix(void *m) __asm__("StoreMatrix__Q34scee3Psp3GumP14ScePspFMatrix4");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void func_09C400(void);
extern int g_AspectRatioID;
extern float D_001EB000[2];
extern float *D_001EB008;
extern unsigned char D_001EAFF8;
extern float *D_001EAFF0;
extern float *D_001EAFF4;
extern float D_001EAF30[16];
extern float D_001EAF70[16];
extern float D_001EAFB0[16];
extern float D_001EAEF0[16];
extern float D_00314550[16];
extern int D_001EACEC;
extern int D_001EACE8;
extern int D_001EAD04;

#define FP(p, off) (*(float *)((char *)(p) + (off)))

void func_0A3650(int mode, float *offs)
{
    float b, a;

    D_001EB008 = offs ? offs : D_001EB000;
    Gum_MatrixMode(5);
    if (D_001EAFF8 == 0) {
        Gum_StoreMatrix(D_00314550);
        D_001EAFF8 = 1;
    }
    if (mode == 3) {
        D_001EAFF0 = D_001EAF70;
        D_001EAFF4 = D_001EAFB0;
    } else {
        D_001EAFF0 = D_001EAF30;
        D_001EAFF4 = D_001EAEF0;
    }
    if (g_AspectRatioID == 0) {
        a = FP(D_001EAFF0, 0x30);
        b = FP(D_001EAFF0, 0x34);
        FP(D_001EAFF0, 0x30) = a + D_001EB008[0];
        FP(D_001EAFF0, 0x34) += D_001EB008[1];
        Gum_LoadMatrix(D_001EAFF0);
        FP(D_001EAFF0, 0x30) = a;
        FP(D_001EAFF0, 0x34) = b;
    } else {
        a = FP(D_001EAFF4, 0x30);
        b = FP(D_001EAFF4, 0x34);
        FP(D_001EAFF4, 0x30) = a + D_001EB008[0];
        FP(D_001EAFF4, 0x34) += D_001EB008[1];
        Gum_LoadMatrix(D_001EAFF4);
        FP(D_001EAFF4, 0x30) = a;
        FP(D_001EAFF4, 0x34) = b;
    }
    Gum_UpdateMatrix();
    func_09C400();
    D_001EACEC = 0;
    D_001EACE8 = 0;
    D_001EAD04 = 0;
}
