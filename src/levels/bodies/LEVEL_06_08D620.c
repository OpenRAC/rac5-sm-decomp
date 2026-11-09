/* LEVEL_06:0x08D620 -- placement copy of LEVEL_01_0949D0.c: renders the shadow buffer pass and restores render state. */
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

extern State D_00221EC0;
extern RT gRT_ShadowBuffer;
extern RT gRT_BackBuffer;
extern unsigned char g_bRenderPlayerShadow;
extern unsigned char D_001E516C;
extern float D_001E52F4;
extern float D_001E52F8;
extern float D_00284FC0[];
extern float D_001E5300[];

extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_PushMatrix(void) __asm__("PushMatrix__Q34scee3Psp3Gumv");
extern void Gum_PopMatrix(void) __asm__("PopMatrix__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_SetMirroring(int b) __asm__("SetMirroring__Q34scee3Psp3Gumb");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");

extern int func_0287D8(int a);
extern void func_09B0A0(int a);
extern void func_09CC38(int a);
extern void func_0A0220(RT *rt, int a);
extern void func_09C8E0(int a, int b);
extern void func_09C7C0(int a, int b, int c);
extern void func_09FB90(short a, short b, int c, int d, int e, int f);
extern void func_087910(Vec4 *v, int a, float x, float y);
extern void func_078EA0(int h, unsigned int c);
extern void func_0875C0(RT *rt, int a, int b);
extern void func_09B0E0(int a);
extern void func_09CD28(int a);

void func_08D620(void)
{
    Vec4 v;
    float fx, fy;

    if (D_00221EC0.h0 == 0)
        return;
    Gum_MatrixMode(0);
    Gum_PushMatrix();
    Gum_MatrixMode(1);
    Gum_PushMatrix();
    if (func_0287D8(4)) {
        Gum_SetMirroring(0);
        func_09B0A0(0);
        D_001E516C = 0;
    }
    gRT_ShadowBuffer.w = 0x80;
    gRT_ShadowBuffer.d = 0x80;
    gRT_ShadowBuffer.h = 0x80;
    dlib_ms_screen_matrix(D_00284FC0, 0, 0, 0x80, -0x80, 0xFFFFFF, 0);
    Gum_MatrixMode(5);
    Gum_PushMatrix();
    Gum_LoadMatrix(D_001E5300);
    Gum_MatrixMode(4);
    Gum_PushMatrix();
    Gum_LoadMatrix(D_00284FC0);
    func_09CC38(0);
    func_0A0220(&gRT_ShadowBuffer, 0);
    func_09C8E0(1, 1);
    func_09CC38(0);
    func_09C7C0(0, 0x40, 5);
    func_09FB90(0, 0, gRT_ShadowBuffer.w, gRT_ShadowBuffer.h, 0, 0);
    if (g_bRenderPlayerShadow) {
        v = D_00221EC0.v;
        v.y = v.y + 0.6f;
        fy = D_001E52F8;
        fx = D_001E52F4;
        func_087910(&v, 1, fx, fy);
        func_078EA0(D_00221EC0.h0, 0xFF000000);
        func_078EA0(D_00221EC0.h2, 0xFF000000);
        func_078EA0(D_00221EC0.h4, 0xFF000000);
        func_078EA0(D_00221EC0.h1, 0xFF000000);
        func_078EA0(D_00221EC0.h3, 0xFF000000);
        func_09CC38(0);
        func_09C7C0(1, 0, 5);
        func_09C7C0(1, 0, 5);
        func_0875C0(&gRT_ShadowBuffer, 0, 1);
    }
    func_09FB90(0, 0, 1, gRT_ShadowBuffer.h, 0, 0);
    func_09FB90(gRT_ShadowBuffer.w - 1, 0, 1, gRT_ShadowBuffer.h, 0, 0);
    func_09FB90(0, 0, gRT_ShadowBuffer.w, 1, 0, 0);
    func_09FB90(0, gRT_ShadowBuffer.h - 1, gRT_ShadowBuffer.w, 1, 0, 0);
    Gum_MatrixMode(4);
    Gum_PopMatrix();
    Gum_MatrixMode(5);
    Gum_PopMatrix();
    func_0A0220(&gRT_BackBuffer, 0);
    func_09B0E0(1);
    if (func_0287D8(4)) {
        Gum_SetMirroring(1);
        func_09B0A0(1);
        { unsigned char one = 1; D_001E516C = one; }
    }
    Gum_MatrixMode(1);
    Gum_PopMatrix();
    Gum_UpdateMatrix();
    Gum_MatrixMode(0);
    Gum_PopMatrix();
    Gum_UpdateMatrix();
    func_09CC38(1);
    func_09CD28(0);
}
