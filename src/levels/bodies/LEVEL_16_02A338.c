/* LEVEL_16:0x02A338 -- placement copy of LEVEL_01_02C940.c: sets up the 2D screen projection and draws a fade overlay. */
extern void Gum_DirtyAllMatricies(void) __asm__("DirtyAllMatricies__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void func_019038(int a);
extern void func_06E4C8(void *m);
extern float func_06F3A8(float a);
extern void func_06E4F0(float a, float b, float c, float d);
extern void func_06F2D8(void);
extern void func_06E918(int a, int b, int c, int d);
extern void func_06E510(int a);
extern void func_094EB0(int a, int b, int c, int d);
extern void func_094E60(int a, int b);
extern void func_0280F0(float *a, float *b);
extern void func_089B50(void *a, float *b, float *c, int d);
extern void func_090E90(void);
extern void func_0916C8(int a);
extern void func_091370(int a, int b);
extern void func_08B0A8(int a);
extern void func_08B100(int a, int b, int c);
extern void func_02A6E8(void *a);
extern void func_094530(int a, int b, int c, int d, int e, int f);
extern void func_090390(int a, unsigned b);
extern float D_001E0660[16];
extern char D_001E06B0[];
extern char D_001CCC80[];

void func_02A338(void)
{
    float a[16];
    float b[16];

    func_019038(1);
    Gum_DirtyAllMatricies();
    Gum_UpdateMatrix();
    func_06E4C8(D_001CCC80);
    func_06E4F0(func_06F3A8(0.5497787594795227f), 0.5497787594795227f, 1.0f, 10000.0f);
    func_06F2D8();
    func_06E918(0, 0, 0, 0);
    func_06E510(0);
    func_094EB0(0x800, 0x800, 0x200, 0x1A0);
    func_094E60(0x700, 0x730);
    dlib_ms_screen_matrix(D_001E0660, 0, 0, 0x200, -0x1A0, 0xFFFFFF, 0);
    func_0280F0(a, b);
    func_089B50(D_001CCC80, a, b, 0);
    Gum_MatrixMode(4);
    Gum_LoadMatrix(D_001E0660);
    func_090E90();
    func_0916C8(0);
    func_091370(0, 2);
    func_08B0A8(0);
    func_08B100(0x1E, 0x1E, 0);
    func_02A6E8(D_001E06B0);
    func_094530(0, 0, 1, 1, 0xFF0000, 0);
    func_0916C8(0);
    func_091370(0, 2);
    func_08B100(0x1F, 0x1F, 0);
    func_090390(0, 0xFFFFFFFF);
}
