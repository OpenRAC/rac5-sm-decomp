/* LEVEL_04:0x097AC8 -- placement copy of LEVEL_01_0949D0.c: renders the shadow buffer pass and restores render state. */
typedef struct {
    char pad0[8];
    short w;
    short h;
    short d;
} RT;
typedef struct { float x, y, z, w; } Vec4;
typedef struct {
    char pad0[0x30];
    Vec4 v;
    char pad40[0x59C - 0x40];
    int h0;
    int h1;
    int h2;
    int h3;
    int h4;
} State;

extern State D_0024F950;
extern RT gRT_ShadowBuffer;
extern RT gRT_BackBuffer;
extern unsigned char g_bRenderPlayerShadow;
extern unsigned char D_0020F72C;
extern float D_0020F8B4;
extern float D_0020F8B8;
extern float D_002B2A40[];
extern float D_0020F8C0[];

extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_PushMatrix(void) __asm__("PushMatrix__Q34scee3Psp3Gumv");
extern void Gum_PopMatrix(void) __asm__("PopMatrix__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_SetMirroring(int b) __asm__("SetMirroring__Q34scee3Psp3Gumb");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");

extern int func_029E98(int a);
extern void func_0A5AE0(int a);
extern void func_0A7678(int a);
extern void func_0AAC60(RT *rt, int a);
extern void func_0A7320(int a, int b);
extern void func_0A7200(int a, int b, int c);
extern void func_0AA5D0(short a, short b, int c, int d, int e, int f);
extern void func_091DB8(Vec4 *v, int a, float x, float y);
extern void func_082720(int h, unsigned int c);
extern void func_091A68(RT *rt, int a, int b);
extern void func_0A5B20(int a);
extern void func_0A7768(int a);

void func_097AC8(void)
{
    Vec4 v;
    float fx, fy;

    if (D_0024F950.h0 == 0)
        return;
    Gum_MatrixMode(0);
    Gum_PushMatrix();
    Gum_MatrixMode(1);
    Gum_PushMatrix();
    if (func_029E98(4)) {
        Gum_SetMirroring(0);
        func_0A5AE0(0);
        D_0020F72C = 0;
    }
    gRT_ShadowBuffer.w = 0x80;
    gRT_ShadowBuffer.d = 0x80;
    gRT_ShadowBuffer.h = 0x80;
    dlib_ms_screen_matrix(D_002B2A40, 0, 0, 0x80, -0x80, 0xFFFFFF, 0);
    Gum_MatrixMode(5);
    Gum_PushMatrix();
    Gum_LoadMatrix(D_0020F8C0);
    Gum_MatrixMode(4);
    Gum_PushMatrix();
    Gum_LoadMatrix(D_002B2A40);
    func_0A7678(0);
    func_0AAC60(&gRT_ShadowBuffer, 0);
    func_0A7320(1, 1);
    func_0A7678(0);
    func_0A7200(0, 0x40, 5);
    func_0AA5D0(0, 0, gRT_ShadowBuffer.w, gRT_ShadowBuffer.h, 0, 0);
    if (g_bRenderPlayerShadow) {
        v = D_0024F950.v;
        v.y = v.y + 0.6f;
        fy = D_0020F8B8;
        fx = D_0020F8B4;
        func_091DB8(&v, 1, fx, fy);
        func_082720(D_0024F950.h0, 0xFF000000);
        func_082720(D_0024F950.h2, 0xFF000000);
        func_082720(D_0024F950.h4, 0xFF000000);
        func_082720(D_0024F950.h1, 0xFF000000);
        func_082720(D_0024F950.h3, 0xFF000000);
        func_0A7678(0);
        func_0A7200(1, 0, 5);
        func_0A7200(1, 0, 5);
        func_091A68(&gRT_ShadowBuffer, 0, 1);
    }
    func_0AA5D0(0, 0, 1, gRT_ShadowBuffer.h, 0, 0);
    func_0AA5D0(gRT_ShadowBuffer.w - 1, 0, 1, gRT_ShadowBuffer.h, 0, 0);
    func_0AA5D0(0, 0, gRT_ShadowBuffer.w, 1, 0, 0);
    func_0AA5D0(0, gRT_ShadowBuffer.h - 1, gRT_ShadowBuffer.w, 1, 0, 0);
    Gum_MatrixMode(4);
    Gum_PopMatrix();
    Gum_MatrixMode(5);
    Gum_PopMatrix();
    func_0AAC60(&gRT_BackBuffer, 0);
    func_0A5B20(1);
    if (func_029E98(4)) {
        Gum_SetMirroring(1);
        func_0A5AE0(1);
        { unsigned char one = 1; D_0020F72C = one; }
    }
    Gum_MatrixMode(1);
    Gum_PopMatrix();
    Gum_UpdateMatrix();
    Gum_MatrixMode(0);
    Gum_PopMatrix();
    Gum_UpdateMatrix();
    func_0A7678(1);
    func_0A7768(0);
}
