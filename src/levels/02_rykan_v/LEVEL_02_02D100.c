/* LEVEL_02:0x02D100 -- placement copy of LEVEL_01_02C940.c: sets up the 2D screen projection and draws a fade overlay. */
extern void Gum_DirtyAllMatricies(void) __asm__("DirtyAllMatricies__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void func_01B5C8(int a);
extern void func_081C20(void *m);
extern float func_0829A0(float a);
extern void func_081C48(float a, float b, float c, float d);
extern void func_0828D0(void);
extern void func_081F10(int a, int b, int c, int d);
extern void func_081C68(int a);
extern void func_0AC680(int a, int b, int c, int d);
extern void func_0AC630(int a, int b);
extern void func_02AE70(float *a, float *b);
extern void func_09F6A0(void *a, float *b, float *c, int d);
extern void func_0A8540(void);
extern void func_0A8D78(int a);
extern void func_0A8A20(int a, int b);
extern void func_0A0C38(int a);
extern void func_0A0C90(int a, int b, int c);
extern void func_02D4B0(void *a);
extern void func_0ABCD0(int a, int b, int c, int d, int e, int f);
extern void func_0A7A40(int a, unsigned b);
extern float D_00248E60[16];
extern char D_00248EB0[];
extern char D_0022CD40[];

void func_02D100(void)
{
    float a[16];
    float b[16];

    func_01B5C8(1);
    Gum_DirtyAllMatricies();
    Gum_UpdateMatrix();
    func_081C20(D_0022CD40);
    func_081C48(func_0829A0(0.5497787594795227f), 0.5497787594795227f, 1.0f, 10000.0f);
    func_0828D0();
    func_081F10(0, 0, 0, 0);
    func_081C68(0);
    func_0AC680(0x800, 0x800, 0x200, 0x1A0);
    func_0AC630(0x700, 0x730);
    dlib_ms_screen_matrix(D_00248E60, 0, 0, 0x200, -0x1A0, 0xFFFFFF, 0);
    func_02AE70(a, b);
    func_09F6A0(D_0022CD40, a, b, 0);
    Gum_MatrixMode(4);
    Gum_LoadMatrix(D_00248E60);
    func_0A8540();
    func_0A8D78(0);
    func_0A8A20(0, 2);
    func_0A0C38(0);
    func_0A0C90(0x1E, 0x1E, 0);
    func_02D4B0(D_00248EB0);
    func_0ABCD0(0, 0, 1, 1, 0xFF0000, 0);
    func_0A8D78(0);
    func_0A8A20(0, 2);
    func_0A0C90(0x1F, 0x1F, 0);
    func_0A7A40(0, 0xFFFFFFFF);
}
