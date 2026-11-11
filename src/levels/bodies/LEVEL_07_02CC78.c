/* LEVEL_07:0x02CC78 -- placement copy of LEVEL_01_02C940.c: sets up the 2D screen projection and draws a fade overlay. */
extern void Gum_DirtyAllMatricies(void) __asm__("DirtyAllMatricies__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void func_01B328(int a);
extern void func_07D528(void *m);
extern float func_07E238(float a);
extern void func_07D550(float a, float b, float c, float d);
extern void func_07E168(void);
extern void func_07D7A8(int a, int b, int c, int d);
extern void func_07D570(int a);
extern void func_0A7D70(int a, int b, int c, int d);
extern void func_0A7D20(int a, int b);
extern void func_02A9E8(float *a, float *b);
extern void func_09AFB0(void *a, float *b, float *c, int d);
extern void func_0A3C30(void);
extern void func_0A4468(int a);
extern void func_0A4110(int a, int b);
extern void func_09C548(int a);
extern void func_09C5A0(int a, int b, int c);
extern void func_02D028(void *a);
extern void func_0A73C0(int a, int b, int c, int d, int e, int f);
extern void func_0A3130(int a, unsigned b);
extern float D_00247260[16];
extern char D_002472B0[];
extern char D_0022CAC0[];

void func_02CC78(void)
{
    float a[16];
    float b[16];

    func_01B328(1);
    Gum_DirtyAllMatricies();
    Gum_UpdateMatrix();
    func_07D528(D_0022CAC0);
    func_07D550(func_07E238(0.5497787594795227f), 0.5497787594795227f, 1.0f, 10000.0f);
    func_07E168();
    func_07D7A8(0, 0, 0, 0);
    func_07D570(0);
    func_0A7D70(0x800, 0x800, 0x200, 0x1A0);
    func_0A7D20(0x700, 0x730);
    dlib_ms_screen_matrix(D_00247260, 0, 0, 0x200, -0x1A0, 0xFFFFFF, 0);
    func_02A9E8(a, b);
    func_09AFB0(D_0022CAC0, a, b, 0);
    Gum_MatrixMode(4);
    Gum_LoadMatrix(D_00247260);
    func_0A3C30();
    func_0A4468(0);
    func_0A4110(0, 2);
    func_09C548(0);
    func_09C5A0(0x1E, 0x1E, 0);
    func_02D028(D_002472B0);
    func_0A73C0(0, 0, 1, 1, 0xFF0000, 0);
    func_0A4468(0);
    func_0A4110(0, 2);
    func_09C5A0(0x1F, 0x1F, 0);
    func_0A3130(0, 0xFFFFFFFF);
}
