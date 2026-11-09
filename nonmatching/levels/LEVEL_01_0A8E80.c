/* LEVEL_01.REL:0x0A8E80: reviewed 404-byte candidate, held for ABI review.
 * Loads a projection matrix shifted by an offset pair, then resets state.
 * gnu-ee-trial C with gnu-ee-trial links 404/404 bytes and is byte-exact at
 * this and 14 other USA placements, but the prototypes disagree.
 * It defines the function returning void with (int, pointer), but the accepted
 * caller LEVEL_01_0B0038.c declares it returning void with (int, int).
 * It defines the function returning void with (int, pointer), but the accepted
 * caller LEVEL_01_0AFFE8.c declares it returning void with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_StoreMatrix(void *m) __asm__("StoreMatrix__Q34scee3Psp3GumP14ScePspFMatrix4");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void func_0A1C30(void);
extern int g_AspectRatioID;
extern float D_001FC100[2];
extern float *D_001FC108;
extern unsigned char D_001FC0F8;
extern float *D_001FC0F0;
extern float *D_001FC0F4;
extern float D_001FC030[16];
extern float D_001FC070[16];
extern float D_001FC0B0[16];
extern float D_001FBFF0[16];
extern float D_003277D0[16];
extern int D_001FBDEC;
extern int D_001FBDE8;
extern int D_001FBE04;

#define FP(p, off) (*(float *)((char *)(p) + (off)))

void func_0A8E80(int mode, float *offs)
{
    float b, a;

    D_001FC108 = offs ? offs : D_001FC100;
    Gum_MatrixMode(5);
    if (D_001FC0F8 == 0) {
        Gum_StoreMatrix(D_003277D0);
        D_001FC0F8 = 1;
    }
    if (mode == 3) {
        D_001FC0F0 = D_001FC070;
        D_001FC0F4 = D_001FC0B0;
    } else {
        D_001FC0F0 = D_001FC030;
        D_001FC0F4 = D_001FBFF0;
    }
    if (g_AspectRatioID == 0) {
        a = FP(D_001FC0F0, 0x30);
        b = FP(D_001FC0F0, 0x34);
        FP(D_001FC0F0, 0x30) = a + D_001FC108[0];
        FP(D_001FC0F0, 0x34) += D_001FC108[1];
        Gum_LoadMatrix(D_001FC0F0);
        FP(D_001FC0F0, 0x30) = a;
        FP(D_001FC0F0, 0x34) = b;
    } else {
        a = FP(D_001FC0F4, 0x30);
        b = FP(D_001FC0F4, 0x34);
        FP(D_001FC0F4, 0x30) = a + D_001FC108[0];
        FP(D_001FC0F4, 0x34) += D_001FC108[1];
        Gum_LoadMatrix(D_001FC0F4);
        FP(D_001FC0F4, 0x30) = a;
        FP(D_001FC0F4, 0x34) = b;
    }
    Gum_UpdateMatrix();
    func_0A1C30();
    D_001FBDEC = 0;
    D_001FBDE8 = 0;
    D_001FBE04 = 0;
}
