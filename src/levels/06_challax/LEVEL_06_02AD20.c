/* LEVEL_06:0x02AD20 -- placement copy of LEVEL_01_02C940.c: sets up the 2D screen projection and draws a fade overlay. */
extern void Gum_DirtyAllMatricies(void) __asm__("DirtyAllMatricies__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void func_019468(int a);
extern void func_074F30(void *m);
extern float func_075CB0(float a);
extern void func_074F58(float a, float b, float c, float d);
extern void func_075BE0(void);
extern void func_075220(int a, int b, int c, int d);
extern void func_074F78(int a);
extern void func_0A0540(int a, int b, int c, int d);
extern void func_0A04F0(int a, int b);
extern void func_028A90(float *a, float *b);
extern void func_091CE0(void *a, float *b, float *c, int d);
extern void func_09C400(void);
extern void func_09CC38(int a);
extern void func_09C8E0(int a, int b);
extern void func_093278(int a);
extern void func_0932D0(int a, int b, int c);
extern void func_02B0D0(void *a);
extern void func_09FB90(int a, int b, int c, int d, int e, int f);
extern void func_09B900(int a, unsigned b);
extern float D_0021E6E0[16];
extern char D_0021E730[];
extern char D_00206C40[];

void func_02AD20(void)
{
    float a[16];
    float b[16];

    func_019468(1);
    Gum_DirtyAllMatricies();
    Gum_UpdateMatrix();
    func_074F30(D_00206C40);
    func_074F58(func_075CB0(0.5497787594795227f), 0.5497787594795227f, 1.0f, 10000.0f);
    func_075BE0();
    func_075220(0, 0, 0, 0);
    func_074F78(0);
    func_0A0540(0x800, 0x800, 0x200, 0x1A0);
    func_0A04F0(0x700, 0x730);
    dlib_ms_screen_matrix(D_0021E6E0, 0, 0, 0x200, -0x1A0, 0xFFFFFF, 0);
    func_028A90(a, b);
    func_091CE0(D_00206C40, a, b, 0);
    Gum_MatrixMode(4);
    Gum_LoadMatrix(D_0021E6E0);
    func_09C400();
    func_09CC38(0);
    func_09C8E0(0, 2);
    func_093278(0);
    func_0932D0(0x1E, 0x1E, 0);
    func_02B0D0(D_0021E730);
    func_09FB90(0, 0, 1, 1, 0xFF0000, 0);
    func_09CC38(0);
    func_09C8E0(0, 2);
    func_0932D0(0x1F, 0x1F, 0);
    func_09B900(0, 0xFFFFFFFF);
}
