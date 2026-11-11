/* LEVEL_01:0x02C940 -- sets up the 2D screen projection and draws a fade overlay. */
extern void Gum_DirtyAllMatricies(void) __asm__("DirtyAllMatricies__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void func_01AC68(int a);
extern void func_07B338(void *m);
extern float func_07C0B8(float a);
extern void func_07B360(float a, float b, float c, float d);
extern void func_07BFE8(void);
extern void func_07B628(int a, int b, int c, int d);
extern void func_07B380(int a);
extern void func_0A5D70(int a, int b, int c, int d);
extern void func_0A5D20(int a, int b);
extern void func_02A6A8(float *a, float *b);
extern void func_098FD0(void *a, float *b, float *c, int d);
extern void func_0A1C30(void);
extern void func_0A2468(int a);
extern void func_0A2110(int a, int b);
extern void func_09A568(int a);
extern void func_09A5C0(int a, int b, int c);
extern void func_02CCF0(void *a);
extern void func_0A53C0(int a, int b, int c, int d, int e, int f);
extern void func_0A1130(int a, unsigned b);
extern float D_00231960[16];
extern char D_002319B0[];
extern char D_00217DC0[];

void func_02C940(void)
{
    float a[16];
    float b[16];

    func_01AC68(1);
    Gum_DirtyAllMatricies();
    Gum_UpdateMatrix();
    func_07B338(D_00217DC0);
    func_07B360(func_07C0B8(0.5497787594795227f), 0.5497787594795227f, 1.0f, 10000.0f);
    func_07BFE8();
    func_07B628(0, 0, 0, 0);
    func_07B380(0);
    func_0A5D70(0x800, 0x800, 0x200, 0x1A0);
    func_0A5D20(0x700, 0x730);
    dlib_ms_screen_matrix(D_00231960, 0, 0, 0x200, -0x1A0, 0xFFFFFF, 0);
    func_02A6A8(a, b);
    func_098FD0(D_00217DC0, a, b, 0);
    Gum_MatrixMode(4);
    Gum_LoadMatrix(D_00231960);
    func_0A1C30();
    func_0A2468(0);
    func_0A2110(0, 2);
    func_09A568(0);
    func_09A5C0(0x1E, 0x1E, 0);
    func_02CCF0(D_002319B0);
    func_0A53C0(0, 0, 1, 1, 0xFF0000, 0);
    func_0A2468(0);
    func_0A2110(0, 2);
    func_09A5C0(0x1F, 0x1F, 0);
    func_0A1130(0, 0xFFFFFFFF);
}
