/* LEVEL_10:0x0A9F98 -- placement copy of LEVEL_01_0A8E80.c: loads a projection matrix shifted by an offset pair, then resets state. */
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_StoreMatrix(void *m) __asm__("StoreMatrix__Q34scee3Psp3GumP14ScePspFMatrix4");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void func_0A2D48(void);
extern int g_AspectRatioID;
extern float D_00205100[2];
extern float *D_00205108;
extern unsigned char D_002050F8;
extern float *D_002050F0;
extern float *D_002050F4;
extern float D_00205030[16];
extern float D_00205070[16];
extern float D_002050B0[16];
extern float D_00204FF0[16];
extern float D_00330BD0[16];
extern int D_00204DEC;
extern int D_00204DE8;
extern int D_00204E04;

#define FP(p, off) (*(float *)((char *)(p) + (off)))

void func_0A9F98(int mode, float *offs)
{
    float b, a;

    D_00205108 = offs ? offs : D_00205100;
    Gum_MatrixMode(5);
    if (D_002050F8 == 0) {
        Gum_StoreMatrix(D_00330BD0);
        D_002050F8 = 1;
    }
    if (mode == 3) {
        D_002050F0 = D_00205070;
        D_002050F4 = D_002050B0;
    } else {
        D_002050F0 = D_00205030;
        D_002050F4 = D_00204FF0;
    }
    if (g_AspectRatioID == 0) {
        a = FP(D_002050F0, 0x30);
        b = FP(D_002050F0, 0x34);
        FP(D_002050F0, 0x30) = a + D_00205108[0];
        FP(D_002050F0, 0x34) += D_00205108[1];
        Gum_LoadMatrix(D_002050F0);
        FP(D_002050F0, 0x30) = a;
        FP(D_002050F0, 0x34) = b;
    } else {
        a = FP(D_002050F4, 0x30);
        b = FP(D_002050F4, 0x34);
        FP(D_002050F4, 0x30) = a + D_00205108[0];
        FP(D_002050F4, 0x34) += D_00205108[1];
        Gum_LoadMatrix(D_002050F4);
        FP(D_002050F4, 0x30) = a;
        FP(D_002050F4, 0x34) = b;
    }
    Gum_UpdateMatrix();
    func_0A2D48();
    D_00204DEC = 0;
    D_00204DE8 = 0;
    D_00204E04 = 0;
}
