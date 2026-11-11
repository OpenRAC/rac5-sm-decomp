/* LEVEL_21:0x0260B0 -- placement copy of LEVEL_01_02C940.c: sets up the 2D screen projection and draws a fade overlay. */
extern void Gum_DirtyAllMatricies(void) __asm__("DirtyAllMatricies__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void func_016E50(int a);
extern void func_060180(void *m);
extern float func_060E90(float a);
extern void func_0601A8(float a, float b, float c, float d);
extern void func_060DC0(void);
extern void func_060400(int a, int b, int c, int d);
extern void func_0601C8(int a);
extern void func_086638(int a, int b, int c, int d);
extern void func_0865E8(int a, int b);
extern void func_023E80(float *a, float *b);
extern void func_07CF68(void *a, float *b, float *c, int d);
extern void func_082528(void);
extern void func_082D60(int a);
extern void func_082A08(int a, int b);
extern void func_07E4A0(int a);
extern void func_07E4F8(int a, int b, int c);
extern void func_026460(void *a);
extern void func_085CB8(int a, int b, int c, int d, int e, int f);
extern void func_081A28(int a, unsigned b);
extern float D_00179AE0[16];
extern char D_00179B30[];
extern char D_0016C540[];

void func_0260B0(void)
{
    float a[16];
    float b[16];

    func_016E50(1);
    Gum_DirtyAllMatricies();
    Gum_UpdateMatrix();
    func_060180(D_0016C540);
    func_0601A8(func_060E90(0.5497787594795227f), 0.5497787594795227f, 1.0f, 10000.0f);
    func_060DC0();
    func_060400(0, 0, 0, 0);
    func_0601C8(0);
    func_086638(0x800, 0x800, 0x200, 0x1A0);
    func_0865E8(0x700, 0x730);
    dlib_ms_screen_matrix(D_00179AE0, 0, 0, 0x200, -0x1A0, 0xFFFFFF, 0);
    func_023E80(a, b);
    func_07CF68(D_0016C540, a, b, 0);
    Gum_MatrixMode(4);
    Gum_LoadMatrix(D_00179AE0);
    func_082528();
    func_082D60(0);
    func_082A08(0, 2);
    func_07E4A0(0);
    func_07E4F8(0x1E, 0x1E, 0);
    func_026460(D_00179B30);
    func_085CB8(0, 0, 1, 1, 0xFF0000, 0);
    func_082D60(0);
    func_082A08(0, 2);
    func_07E4F8(0x1F, 0x1F, 0);
    func_081A28(0, 0xFFFFFFFF);
}
