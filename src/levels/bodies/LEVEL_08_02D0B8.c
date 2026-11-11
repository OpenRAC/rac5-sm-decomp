/* LEVEL_08:0x02D0B8 -- placement copy of LEVEL_01_02C940.c: sets up the 2D screen projection and draws a fade overlay. */
extern void Gum_DirtyAllMatricies(void) __asm__("DirtyAllMatricies__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void func_01B5E0(int a);
extern void func_083330(void *m);
extern float func_084040(float a);
extern void func_083358(float a, float b, float c, float d);
extern void func_083F70(void);
extern void func_0835B0(int a, int b, int c, int d);
extern void func_083378(int a);
extern void func_0B0668(int a, int b, int c, int d);
extern void func_0B0618(int a, int b);
extern void func_02AC20(float *a, float *b);
extern void func_0A1070(void *a, float *b, float *c, int d);
extern void func_0AC528(void);
extern void func_0ACD60(int a);
extern void func_0ACA08(int a, int b);
extern void func_0A2608(int a);
extern void func_0A2660(int a, int b, int c);
extern void func_02D468(void *a);
extern void func_0AFCB8(int a, int b, int c, int d, int e, int f);
extern void func_0ABA28(int a, unsigned b);
extern float D_00280BE0[16];
extern char D_00280C30[];
extern char D_00261A40[];

void func_02D0B8(void)
{
    float a[16];
    float b[16];

    func_01B5E0(1);
    Gum_DirtyAllMatricies();
    Gum_UpdateMatrix();
    func_083330(D_00261A40);
    func_083358(func_084040(0.5497787594795227f), 0.5497787594795227f, 1.0f, 10000.0f);
    func_083F70();
    func_0835B0(0, 0, 0, 0);
    func_083378(0);
    func_0B0668(0x800, 0x800, 0x200, 0x1A0);
    func_0B0618(0x700, 0x730);
    dlib_ms_screen_matrix(D_00280BE0, 0, 0, 0x200, -0x1A0, 0xFFFFFF, 0);
    func_02AC20(a, b);
    func_0A1070(D_00261A40, a, b, 0);
    Gum_MatrixMode(4);
    Gum_LoadMatrix(D_00280BE0);
    func_0AC528();
    func_0ACD60(0);
    func_0ACA08(0, 2);
    func_0A2608(0);
    func_0A2660(0x1E, 0x1E, 0);
    func_02D468(D_00280C30);
    func_0AFCB8(0, 0, 1, 1, 0xFF0000, 0);
    func_0ACD60(0);
    func_0ACA08(0, 2);
    func_0A2660(0x1F, 0x1F, 0);
    func_0ABA28(0, 0xFFFFFFFF);
}
