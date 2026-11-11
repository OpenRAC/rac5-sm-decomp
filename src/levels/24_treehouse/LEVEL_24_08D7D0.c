/* LEVEL_24:0x08D7D0 -- placement copy of LEVEL_01_0949D0.c: renders the shadow buffer pass and restores render state. */
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

extern State D_00201040;
extern RT gRT_ShadowBuffer;
extern RT gRT_BackBuffer;
extern unsigned char g_bRenderPlayerShadow;
extern unsigned char D_001C6EEC;
extern float D_001C7074;
extern float D_001C7078;
extern float D_00264100[];
extern float D_001C7080[];

extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_PushMatrix(void) __asm__("PushMatrix__Q34scee3Psp3Gumv");
extern void Gum_PopMatrix(void) __asm__("PopMatrix__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_SetMirroring(int b) __asm__("SetMirroring__Q34scee3Psp3Gumb");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");

extern int func_027930(int a);
extern void func_09A148(int a);
extern void func_09BCE0(int a);
extern void func_09F2C8(RT *rt, int a);
extern void func_09B988(int a, int b);
extern void func_09B868(int a, int b, int c);
extern void func_09EC38(short a, short b, int c, int d, int e, int f);
extern void func_087D00(Vec4 *v, int a, float x, float y);
extern void func_0799A0(int h, unsigned int c);
extern void func_0879B0(RT *rt, int a, int b);
extern void func_09A188(int a);
extern void func_09BDD0(int a);

void func_08D7D0(void)
{
    Vec4 v;
    float fx, fy;

    if (D_00201040.h0 == 0)
        return;
    Gum_MatrixMode(0);
    Gum_PushMatrix();
    Gum_MatrixMode(1);
    Gum_PushMatrix();
    if (func_027930(4)) {
        Gum_SetMirroring(0);
        func_09A148(0);
        D_001C6EEC = 0;
    }
    gRT_ShadowBuffer.w = 0x80;
    gRT_ShadowBuffer.d = 0x80;
    gRT_ShadowBuffer.h = 0x80;
    dlib_ms_screen_matrix(D_00264100, 0, 0, 0x80, -0x80, 0xFFFFFF, 0);
    Gum_MatrixMode(5);
    Gum_PushMatrix();
    Gum_LoadMatrix(D_001C7080);
    Gum_MatrixMode(4);
    Gum_PushMatrix();
    Gum_LoadMatrix(D_00264100);
    func_09BCE0(0);
    func_09F2C8(&gRT_ShadowBuffer, 0);
    func_09B988(1, 1);
    func_09BCE0(0);
    func_09B868(0, 0x40, 5);
    func_09EC38(0, 0, gRT_ShadowBuffer.w, gRT_ShadowBuffer.h, 0, 0);
    if (g_bRenderPlayerShadow) {
        v = D_00201040.v;
        v.y = v.y + 0.6f;
        fy = D_001C7078;
        fx = D_001C7074;
        func_087D00(&v, 1, fx, fy);
        func_0799A0(D_00201040.h0, 0xFF000000);
        func_0799A0(D_00201040.h2, 0xFF000000);
        func_0799A0(D_00201040.h4, 0xFF000000);
        func_0799A0(D_00201040.h1, 0xFF000000);
        func_0799A0(D_00201040.h3, 0xFF000000);
        func_09BCE0(0);
        func_09B868(1, 0, 5);
        func_09B868(1, 0, 5);
        func_0879B0(&gRT_ShadowBuffer, 0, 1);
    }
    func_09EC38(0, 0, 1, gRT_ShadowBuffer.h, 0, 0);
    func_09EC38(gRT_ShadowBuffer.w - 1, 0, 1, gRT_ShadowBuffer.h, 0, 0);
    func_09EC38(0, 0, gRT_ShadowBuffer.w, 1, 0, 0);
    func_09EC38(0, gRT_ShadowBuffer.h - 1, gRT_ShadowBuffer.w, 1, 0, 0);
    Gum_MatrixMode(4);
    Gum_PopMatrix();
    Gum_MatrixMode(5);
    Gum_PopMatrix();
    func_09F2C8(&gRT_BackBuffer, 0);
    func_09A188(1);
    if (func_027930(4)) {
        Gum_SetMirroring(1);
        func_09A148(1);
        { unsigned char one = 1; D_001C6EEC = one; }
    }
    Gum_MatrixMode(1);
    Gum_PopMatrix();
    Gum_UpdateMatrix();
    Gum_MatrixMode(0);
    Gum_PopMatrix();
    Gum_UpdateMatrix();
    func_09BCE0(1);
    func_09BDD0(0);
}
