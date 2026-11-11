/* LEVEL_04:0x02C5E0 -- placement copy of LEVEL_01_02C940.c: sets up the 2D screen projection and draws a fade overlay. */
extern void Gum_DirtyAllMatricies(void) __asm__("DirtyAllMatricies__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void func_01A8E8(int a);
extern void func_07E7B0(void *m);
extern float func_07F530(float a);
extern void func_07E7D8(float a, float b, float c, float d);
extern void func_07F460(void);
extern void func_07EAA0(int a, int b, int c, int d);
extern void func_07E7F8(int a);
extern void func_0AAF80(int a, int b, int c, int d);
extern void func_0AAF30(int a, int b);
extern void func_02A150(float *a, float *b);
extern void func_09C0D8(void *a, float *b, float *c, int d);
extern void func_0A6E40(void);
extern void func_0A7678(int a);
extern void func_0A7320(int a, int b);
extern void func_09D670(int a);
extern void func_09D6C8(int a, int b, int c);
extern void func_02C990(void *a);
extern void func_0AA5D0(int a, int b, int c, int d, int e, int f);
extern void func_0A6340(int a, unsigned b);
extern float D_0024C160[16];
extern char D_0024C1B0[];
extern char D_00231740[];

void func_02C5E0(void)
{
    float a[16];
    float b[16];

    func_01A8E8(1);
    Gum_DirtyAllMatricies();
    Gum_UpdateMatrix();
    func_07E7B0(D_00231740);
    func_07E7D8(func_07F530(0.5497787594795227f), 0.5497787594795227f, 1.0f, 10000.0f);
    func_07F460();
    func_07EAA0(0, 0, 0, 0);
    func_07E7F8(0);
    func_0AAF80(0x800, 0x800, 0x200, 0x1A0);
    func_0AAF30(0x700, 0x730);
    dlib_ms_screen_matrix(D_0024C160, 0, 0, 0x200, -0x1A0, 0xFFFFFF, 0);
    func_02A150(a, b);
    func_09C0D8(D_00231740, a, b, 0);
    Gum_MatrixMode(4);
    Gum_LoadMatrix(D_0024C160);
    func_0A6E40();
    func_0A7678(0);
    func_0A7320(0, 2);
    func_09D670(0);
    func_09D6C8(0x1E, 0x1E, 0);
    func_02C990(D_0024C1B0);
    func_0AA5D0(0, 0, 1, 1, 0xFF0000, 0);
    func_0A7678(0);
    func_0A7320(0, 2);
    func_09D6C8(0x1F, 0x1F, 0);
    func_0A6340(0, 0xFFFFFFFF);
}
