/* LEVEL_03:0x02C730 -- placement copy of LEVEL_01_02C940.c: sets up the 2D screen projection and draws a fade overlay. */
extern void Gum_DirtyAllMatricies(void) __asm__("DirtyAllMatricies__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void func_01A9D0(int a);
extern void func_07B130(void *m);
extern float func_07BEB0(float a);
extern void func_07B158(float a, float b, float c, float d);
extern void func_07BDE0(void);
extern void func_07B420(int a, int b, int c, int d);
extern void func_07B178(int a);
extern void func_0A5AF0(int a, int b, int c, int d);
extern void func_0A5AA0(int a, int b);
extern void func_02A4A0(float *a, float *b);
extern void func_098D58(void *a, float *b, float *c, int d);
extern void func_0A19B0(void);
extern void func_0A21E8(int a);
extern void func_0A1E90(int a, int b);
extern void func_09A2F0(int a);
extern void func_09A348(int a, int b, int c);
extern void func_02CAE0(void *a);
extern void func_0A5140(int a, int b, int c, int d, int e, int f);
extern void func_0A0EB0(int a, unsigned b);
extern float D_0024C7E0[16];
extern char D_0024C830[];
extern char D_00230CC0[];

void func_02C730(void)
{
    float a[16];
    float b[16];

    func_01A9D0(1);
    Gum_DirtyAllMatricies();
    Gum_UpdateMatrix();
    func_07B130(D_00230CC0);
    func_07B158(func_07BEB0(0.5497787594795227f), 0.5497787594795227f, 1.0f, 10000.0f);
    func_07BDE0();
    func_07B420(0, 0, 0, 0);
    func_07B178(0);
    func_0A5AF0(0x800, 0x800, 0x200, 0x1A0);
    func_0A5AA0(0x700, 0x730);
    dlib_ms_screen_matrix(D_0024C7E0, 0, 0, 0x200, -0x1A0, 0xFFFFFF, 0);
    func_02A4A0(a, b);
    func_098D58(D_00230CC0, a, b, 0);
    Gum_MatrixMode(4);
    Gum_LoadMatrix(D_0024C7E0);
    func_0A19B0();
    func_0A21E8(0);
    func_0A1E90(0, 2);
    func_09A2F0(0);
    func_09A348(0x1E, 0x1E, 0);
    func_02CAE0(D_0024C830);
    func_0A5140(0, 0, 1, 1, 0xFF0000, 0);
    func_0A21E8(0);
    func_0A1E90(0, 2);
    func_09A348(0x1F, 0x1F, 0);
    func_0A0EB0(0, 0xFFFFFFFF);
}
