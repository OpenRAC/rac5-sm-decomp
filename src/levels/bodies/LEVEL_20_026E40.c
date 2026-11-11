/* LEVEL_20:0x026E40 -- placement copy of LEVEL_01_02C940.c: sets up the 2D screen projection and draws a fade overlay. */
extern void Gum_DirtyAllMatricies(void) __asm__("DirtyAllMatricies__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void func_016DF0(int a);
extern void func_05D6D8(void *m);
extern float func_05E3B0(float a);
extern void func_05D700(float a, float b, float c, float d);
extern void func_05E2E0(void);
extern void func_05D920(int a, int b, int c, int d);
extern void func_05D720(int a);
extern void func_07F5A8(int a, int b, int c, int d);
extern void func_07F558(int a, int b);
extern void func_024BF8(float *a, float *b);
extern void func_0772F0(void *a, float *b, float *c, int d);
extern void func_07B588(void);
extern void func_07BDC0(int a);
extern void func_07BA68(int a, int b);
extern void func_0787E8(int a);
extern void func_078840(int a, int b, int c);
extern void func_0271F0(void *a);
extern void func_07EC28(int a, int b, int c, int d, int e, int f);
extern void func_07AA88(int a, unsigned b);
extern float D_00137FE0[16];
extern char D_00138030[];
extern char D_0012DD00[];

void func_026E40(void)
{
    float a[16];
    float b[16];

    func_016DF0(1);
    Gum_DirtyAllMatricies();
    Gum_UpdateMatrix();
    func_05D6D8(D_0012DD00);
    func_05D700(func_05E3B0(0.5497787594795227f), 0.5497787594795227f, 1.0f, 10000.0f);
    func_05E2E0();
    func_05D920(0, 0, 0, 0);
    func_05D720(0);
    func_07F5A8(0x800, 0x800, 0x200, 0x1A0);
    func_07F558(0x700, 0x730);
    dlib_ms_screen_matrix(D_00137FE0, 0, 0, 0x200, -0x1A0, 0xFFFFFF, 0);
    func_024BF8(a, b);
    func_0772F0(D_0012DD00, a, b, 0);
    Gum_MatrixMode(4);
    Gum_LoadMatrix(D_00137FE0);
    func_07B588();
    func_07BDC0(0);
    func_07BA68(0, 2);
    func_0787E8(0);
    func_078840(0x1E, 0x1E, 0);
    func_0271F0(D_00138030);
    func_07EC28(0, 0, 1, 1, 0xFF0000, 0);
    func_07BDC0(0);
    func_07BA68(0, 2);
    func_078840(0x1F, 0x1F, 0);
    func_07AA88(0, 0xFFFFFFFF);
}
