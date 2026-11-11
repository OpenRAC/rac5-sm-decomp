/* LEVEL_17:0x029CB8 -- placement copy of LEVEL_01_02C940.c: sets up the 2D screen projection and draws a fade overlay. */
extern void Gum_DirtyAllMatricies(void) __asm__("DirtyAllMatricies__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void func_0189B8(int a);
extern void func_06EB70(void *m);
extern float func_06F9E0(float a);
extern void func_06EB98(float a, float b, float c, float d);
extern void func_06F910(void);
extern void func_06EF50(int a, int b, int c, int d);
extern void func_06EBB8(int a);
extern void func_0943A8(int a, int b, int c, int d);
extern void func_094358(int a, int b);
extern void func_027A70(float *a, float *b);
extern void func_08A590(void *a, float *b, float *c, int d);
extern void func_090388(void);
extern void func_090BC0(int a);
extern void func_090868(int a, int b);
extern void func_08BAE8(int a);
extern void func_08BB40(int a, int b, int c);
extern void func_02A068(void *a);
extern void func_093A28(int a, int b, int c, int d, int e, int f);
extern void func_08F888(int a, unsigned b);
extern float D_001D1960[16];
extern char D_001D19B0[];
extern char D_001C0100[];

void func_029CB8(void)
{
    float a[16];
    float b[16];

    func_0189B8(1);
    Gum_DirtyAllMatricies();
    Gum_UpdateMatrix();
    func_06EB70(D_001C0100);
    func_06EB98(func_06F9E0(0.5497787594795227f), 0.5497787594795227f, 1.0f, 10000.0f);
    func_06F910();
    func_06EF50(0, 0, 0, 0);
    func_06EBB8(0);
    func_0943A8(0x800, 0x800, 0x200, 0x1A0);
    func_094358(0x700, 0x730);
    dlib_ms_screen_matrix(D_001D1960, 0, 0, 0x200, -0x1A0, 0xFFFFFF, 0);
    func_027A70(a, b);
    func_08A590(D_001C0100, a, b, 0);
    Gum_MatrixMode(4);
    Gum_LoadMatrix(D_001D1960);
    func_090388();
    func_090BC0(0);
    func_090868(0, 2);
    func_08BAE8(0);
    func_08BB40(0x1E, 0x1E, 0);
    func_02A068(D_001D19B0);
    func_093A28(0, 0, 1, 1, 0xFF0000, 0);
    func_090BC0(0);
    func_090868(0, 2);
    func_08BB40(0x1F, 0x1F, 0);
    func_08F888(0, 0xFFFFFFFF);
}
