/* LEVEL_22:0x026ED0 -- placement copy of LEVEL_01_02C940.c: sets up the 2D screen projection and draws a fade overlay. */
extern void Gum_DirtyAllMatricies(void) __asm__("DirtyAllMatricies__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void func_017280(int a);
extern void func_06DCF8(void *m);
extern float func_06EBC0(float a);
extern void func_06DD20(float a, float b, float c, float d);
extern void func_06EAF0(void);
extern void func_06E130(int a, int b, int c, int d);
extern void func_06DD40(int a);
extern void func_094350(int a, int b, int c, int d);
extern void func_094300(int a, int b);
extern void func_024C40(float *a, float *b);
extern void func_089C90(void *a, float *b, float *c, int d);
extern void func_090240(void);
extern void func_090A78(int a);
extern void func_090720(int a, int b);
extern void func_08B228(int a);
extern void func_08B280(int a, int b, int c);
extern void func_027280(void *a);
extern void func_0939D0(int a, int b, int c, int d, int e, int f);
extern void func_08F740(int a, unsigned b);
extern float D_00183560[16];
extern char D_001835B0[];
extern char D_00175240[];

void func_026ED0(void)
{
    float a[16];
    float b[16];

    func_017280(1);
    Gum_DirtyAllMatricies();
    Gum_UpdateMatrix();
    func_06DCF8(D_00175240);
    func_06DD20(func_06EBC0(0.5497787594795227f), 0.5497787594795227f, 1.0f, 10000.0f);
    func_06EAF0();
    func_06E130(0, 0, 0, 0);
    func_06DD40(0);
    func_094350(0x800, 0x800, 0x200, 0x1A0);
    func_094300(0x700, 0x730);
    dlib_ms_screen_matrix(D_00183560, 0, 0, 0x200, -0x1A0, 0xFFFFFF, 0);
    func_024C40(a, b);
    func_089C90(D_00175240, a, b, 0);
    Gum_MatrixMode(4);
    Gum_LoadMatrix(D_00183560);
    func_090240();
    func_090A78(0);
    func_090720(0, 2);
    func_08B228(0);
    func_08B280(0x1E, 0x1E, 0);
    func_027280(D_001835B0);
    func_0939D0(0, 0, 1, 1, 0xFF0000, 0);
    func_090A78(0);
    func_090720(0, 2);
    func_08B280(0x1F, 0x1F, 0);
    func_08F740(0, 0xFFFFFFFF);
}
