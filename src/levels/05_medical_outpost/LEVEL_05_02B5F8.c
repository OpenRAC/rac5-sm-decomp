/* LEVEL_05:0x02B5F8 -- placement copy of LEVEL_01_02C940.c: sets up the 2D screen projection and draws a fade overlay. */
extern void Gum_DirtyAllMatricies(void) __asm__("DirtyAllMatricies__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void func_01A200(int a);
extern void func_078A30(void *m);
extern float func_079740(float a);
extern void func_078A58(float a, float b, float c, float d);
extern void func_079670(void);
extern void func_078CB0(int a, int b, int c, int d);
extern void func_078A78(int a);
extern void func_0A4330(int a, int b, int c, int d);
extern void func_0A42E0(int a, int b);
extern void func_029320(float *a, float *b);
extern void func_096630(void *a, float *b, float *c, int d);
extern void func_0A01F0(void);
extern void func_0A0A28(int a);
extern void func_0A06D0(int a, int b);
extern void func_097BC8(int a);
extern void func_097C20(int a, int b, int c);
extern void func_02B9A8(void *a);
extern void func_0A3980(int a, int b, int c, int d, int e, int f);
extern void func_09F6F0(int a, unsigned b);
extern float D_0021D660[16];
extern char D_0021D6B0[];
extern char D_00206CC0[];

void func_02B5F8(void)
{
    float a[16];
    float b[16];

    func_01A200(1);
    Gum_DirtyAllMatricies();
    Gum_UpdateMatrix();
    func_078A30(D_00206CC0);
    func_078A58(func_079740(0.5497787594795227f), 0.5497787594795227f, 1.0f, 10000.0f);
    func_079670();
    func_078CB0(0, 0, 0, 0);
    func_078A78(0);
    func_0A4330(0x800, 0x800, 0x200, 0x1A0);
    func_0A42E0(0x700, 0x730);
    dlib_ms_screen_matrix(D_0021D660, 0, 0, 0x200, -0x1A0, 0xFFFFFF, 0);
    func_029320(a, b);
    func_096630(D_00206CC0, a, b, 0);
    Gum_MatrixMode(4);
    Gum_LoadMatrix(D_0021D660);
    func_0A01F0();
    func_0A0A28(0);
    func_0A06D0(0, 2);
    func_097BC8(0);
    func_097C20(0x1E, 0x1E, 0);
    func_02B9A8(D_0021D6B0);
    func_0A3980(0, 0, 1, 1, 0xFF0000, 0);
    func_0A0A28(0);
    func_0A06D0(0, 2);
    func_097C20(0x1F, 0x1F, 0);
    func_09F6F0(0, 0xFFFFFFFF);
}
