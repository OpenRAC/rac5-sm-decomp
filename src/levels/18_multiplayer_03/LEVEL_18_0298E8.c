/* LEVEL_18:0x0298E8 -- placement copy of LEVEL_01_02C940.c: sets up the 2D screen projection and draws a fade overlay. */
extern void Gum_DirtyAllMatricies(void) __asm__("DirtyAllMatricies__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void func_018680(int a);
extern void func_06DC00(void *m);
extern float func_06EA70(float a);
extern void func_06DC28(float a, float b, float c, float d);
extern void func_06E9A0(void);
extern void func_06DFE0(int a, int b, int c, int d);
extern void func_06DC48(int a);
extern void func_093EC0(int a, int b, int c, int d);
extern void func_093E70(int a, int b);
extern void func_0276A0(float *a, float *b);
extern void func_089498(void *a, float *b, float *c, int d);
extern void func_08FEA0(void);
extern void func_0906D8(int a);
extern void func_090380(int a, int b);
extern void func_08A9F0(int a);
extern void func_08AA48(int a, int b, int c);
extern void func_029C98(void *a);
extern void func_093540(int a, int b, int c, int d, int e, int f);
extern void func_08F3A0(int a, unsigned b);
extern float D_001E09E0[16];
extern char D_001E0A30[];
extern char D_001CE200[];

void func_0298E8(void)
{
    float a[16];
    float b[16];

    func_018680(1);
    Gum_DirtyAllMatricies();
    Gum_UpdateMatrix();
    func_06DC00(D_001CE200);
    func_06DC28(func_06EA70(0.5497787594795227f), 0.5497787594795227f, 1.0f, 10000.0f);
    func_06E9A0();
    func_06DFE0(0, 0, 0, 0);
    func_06DC48(0);
    func_093EC0(0x800, 0x800, 0x200, 0x1A0);
    func_093E70(0x700, 0x730);
    dlib_ms_screen_matrix(D_001E09E0, 0, 0, 0x200, -0x1A0, 0xFFFFFF, 0);
    func_0276A0(a, b);
    func_089498(D_001CE200, a, b, 0);
    Gum_MatrixMode(4);
    Gum_LoadMatrix(D_001E09E0);
    func_08FEA0();
    func_0906D8(0);
    func_090380(0, 2);
    func_08A9F0(0);
    func_08AA48(0x1E, 0x1E, 0);
    func_029C98(D_001E0A30);
    func_093540(0, 0, 1, 1, 0xFF0000, 0);
    func_0906D8(0);
    func_090380(0, 2);
    func_08AA48(0x1F, 0x1F, 0);
    func_08F3A0(0, 0xFFFFFFFF);
}
