/* LEVEL_24:0x029E80 -- placement copy of LEVEL_01_02C940.c: sets up the 2D screen projection and draws a fade overlay. */
extern void Gum_DirtyAllMatricies(void) __asm__("DirtyAllMatricies__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void func_019258(int a);
extern void func_075AA0(void *m);
extern float func_0767B0(float a);
extern void func_075AC8(float a, float b, float c, float d);
extern void func_0766E0(void);
extern void func_075D20(int a, int b, int c, int d);
extern void func_075AE8(int a);
extern void func_09F5E8(int a, int b, int c, int d);
extern void func_09F598(int a, int b);
extern void func_027BE8(float *a, float *b);
extern void func_091F28(void *a, float *b, float *c, int d);
extern void func_09B4A8(void);
extern void func_09BCE0(int a);
extern void func_09B988(int a, int b);
extern void func_0934C0(int a);
extern void func_093518(int a, int b, int c);
extern void func_02A230(void *a);
extern void func_09EC38(int a, int b, int c, int d, int e, int f);
extern void func_09A9A8(int a, unsigned b);
extern float D_001FD860[16];
extern char D_001FD8B0[];
extern char D_001E8B40[];

void func_029E80(void)
{
    float a[16];
    float b[16];

    func_019258(1);
    Gum_DirtyAllMatricies();
    Gum_UpdateMatrix();
    func_075AA0(D_001E8B40);
    func_075AC8(func_0767B0(0.5497787594795227f), 0.5497787594795227f, 1.0f, 10000.0f);
    func_0766E0();
    func_075D20(0, 0, 0, 0);
    func_075AE8(0);
    func_09F5E8(0x800, 0x800, 0x200, 0x1A0);
    func_09F598(0x700, 0x730);
    dlib_ms_screen_matrix(D_001FD860, 0, 0, 0x200, -0x1A0, 0xFFFFFF, 0);
    func_027BE8(a, b);
    func_091F28(D_001E8B40, a, b, 0);
    Gum_MatrixMode(4);
    Gum_LoadMatrix(D_001FD860);
    func_09B4A8();
    func_09BCE0(0);
    func_09B988(0, 2);
    func_0934C0(0);
    func_093518(0x1E, 0x1E, 0);
    func_02A230(D_001FD8B0);
    func_09EC38(0, 0, 1, 1, 0xFF0000, 0);
    func_09BCE0(0);
    func_09B988(0, 2);
    func_093518(0x1F, 0x1F, 0);
    func_09A9A8(0, 0xFFFFFFFF);
}
