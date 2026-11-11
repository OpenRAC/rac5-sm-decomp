/* LEVEL_19:0x02A0E0 -- placement copy of LEVEL_01_02C940.c: sets up the 2D screen projection and draws a fade overlay. */
extern void Gum_DirtyAllMatricies(void) __asm__("DirtyAllMatricies__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void func_018D38(int a);
extern void func_06E5A0(void *m);
extern float func_06F410(float a);
extern void func_06E5C8(float a, float b, float c, float d);
extern void func_06F340(void);
extern void func_06E980(int a, int b, int c, int d);
extern void func_06E5E8(int a);
extern void func_094740(int a, int b, int c, int d);
extern void func_0946F0(int a, int b);
extern void func_027C98(float *a, float *b);
extern void func_08A000(void *a, float *b, float *c, int d);
extern void func_090720(void);
extern void func_090F58(int a);
extern void func_090C00(int a, int b);
extern void func_08B558(int a);
extern void func_08B5B0(int a, int b, int c);
extern void func_02A490(void *a);
extern void func_093DC0(int a, int b, int c, int d, int e, int f);
extern void func_08FC20(int a, unsigned b);
extern float D_001E07E0[16];
extern char D_001E0830[];
extern char D_001CDE80[];

void func_02A0E0(void)
{
    float a[16];
    float b[16];

    func_018D38(1);
    Gum_DirtyAllMatricies();
    Gum_UpdateMatrix();
    func_06E5A0(D_001CDE80);
    func_06E5C8(func_06F410(0.5497787594795227f), 0.5497787594795227f, 1.0f, 10000.0f);
    func_06F340();
    func_06E980(0, 0, 0, 0);
    func_06E5E8(0);
    func_094740(0x800, 0x800, 0x200, 0x1A0);
    func_0946F0(0x700, 0x730);
    dlib_ms_screen_matrix(D_001E07E0, 0, 0, 0x200, -0x1A0, 0xFFFFFF, 0);
    func_027C98(a, b);
    func_08A000(D_001CDE80, a, b, 0);
    Gum_MatrixMode(4);
    Gum_LoadMatrix(D_001E07E0);
    func_090720();
    func_090F58(0);
    func_090C00(0, 2);
    func_08B558(0);
    func_08B5B0(0x1E, 0x1E, 0);
    func_02A490(D_001E0830);
    func_093DC0(0, 0, 1, 1, 0xFF0000, 0);
    func_090F58(0);
    func_090C00(0, 2);
    func_08B5B0(0x1F, 0x1F, 0);
    func_08FC20(0, 0xFFFFFFFF);
}
