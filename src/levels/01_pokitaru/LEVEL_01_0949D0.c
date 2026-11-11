/* LEVEL_01:0x0949D0 -- renders the shadow buffer pass and restores render state. */
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

extern State D_00235140;
extern RT gRT_ShadowBuffer;
extern RT gRT_BackBuffer;
extern unsigned char g_bRenderPlayerShadow;
extern unsigned char D_001F626C;
extern float D_001F63F4;
extern float D_001F63F8;
extern float D_00298240[];
extern float D_001F6400[];

extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_PushMatrix(void) __asm__("PushMatrix__Q34scee3Psp3Gumv");
extern void Gum_PopMatrix(void) __asm__("PopMatrix__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_SetMirroring(int b) __asm__("SetMirroring__Q34scee3Psp3Gumb");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");

extern int func_02A3F0(int a);
extern void func_0A08C8(int a);
extern void func_0A2468(int a);
extern void func_0A5A50(RT *rt, int a);
extern void func_0A2110(int a, int b);
extern void func_0A1FF0(int a, int b, int c);
extern void func_0A53C0(short a, short b, int c, int d, int e, int f);
extern void func_08ECC0(Vec4 *v, int a, float x, float y);
extern void func_07F2C0(int h, unsigned int c);
extern void func_08E970(RT *rt, int a, int b);
extern void func_0A0908(int a);
extern void func_0A2558(int a);

void func_0949D0(void)
{
    Vec4 v;
    float fx, fy;

    if (D_00235140.h0 == 0)
        return;
    Gum_MatrixMode(0);
    Gum_PushMatrix();
    Gum_MatrixMode(1);
    Gum_PushMatrix();
    if (func_02A3F0(4)) {
        Gum_SetMirroring(0);
        func_0A08C8(0);
        D_001F626C = 0;
    }
    gRT_ShadowBuffer.w = 0x80;
    gRT_ShadowBuffer.d = 0x80;
    gRT_ShadowBuffer.h = 0x80;
    dlib_ms_screen_matrix(D_00298240, 0, 0, 0x80, -0x80, 0xFFFFFF, 0);
    Gum_MatrixMode(5);
    Gum_PushMatrix();
    Gum_LoadMatrix(D_001F6400);
    Gum_MatrixMode(4);
    Gum_PushMatrix();
    Gum_LoadMatrix(D_00298240);
    func_0A2468(0);
    func_0A5A50(&gRT_ShadowBuffer, 0);
    func_0A2110(1, 1);
    func_0A2468(0);
    func_0A1FF0(0, 0x40, 5);
    func_0A53C0(0, 0, gRT_ShadowBuffer.w, gRT_ShadowBuffer.h, 0, 0);
    if (g_bRenderPlayerShadow) {
        v = D_00235140.v;
        v.y = v.y + 0.6f;
        fy = D_001F63F8;
        fx = D_001F63F4;
        func_08ECC0(&v, 1, fx, fy);
        func_07F2C0(D_00235140.h0, 0xFF000000);
        func_07F2C0(D_00235140.h2, 0xFF000000);
        func_07F2C0(D_00235140.h4, 0xFF000000);
        func_07F2C0(D_00235140.h1, 0xFF000000);
        func_07F2C0(D_00235140.h3, 0xFF000000);
        func_0A2468(0);
        func_0A1FF0(1, 0, 5);
        func_0A1FF0(1, 0, 5);
        func_08E970(&gRT_ShadowBuffer, 0, 1);
    }
    func_0A53C0(0, 0, 1, gRT_ShadowBuffer.h, 0, 0);
    func_0A53C0(gRT_ShadowBuffer.w - 1, 0, 1, gRT_ShadowBuffer.h, 0, 0);
    func_0A53C0(0, 0, gRT_ShadowBuffer.w, 1, 0, 0);
    func_0A53C0(0, gRT_ShadowBuffer.h - 1, gRT_ShadowBuffer.w, 1, 0, 0);
    Gum_MatrixMode(4);
    Gum_PopMatrix();
    Gum_MatrixMode(5);
    Gum_PopMatrix();
    func_0A5A50(&gRT_BackBuffer, 0);
    func_0A0908(1);
    if (func_02A3F0(4)) {
        Gum_SetMirroring(1);
        func_0A08C8(1);
        { unsigned char one = 1; D_001F626C = one; }
    }
    Gum_MatrixMode(1);
    Gum_PopMatrix();
    Gum_UpdateMatrix();
    Gum_MatrixMode(0);
    Gum_PopMatrix();
    Gum_UpdateMatrix();
    func_0A2468(1);
    func_0A2558(0);
}
