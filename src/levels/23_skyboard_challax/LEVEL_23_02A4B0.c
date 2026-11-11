/* LEVEL_23:0x02A4B0 -- placement copy of LEVEL_01_02C940.c: sets up the 2D screen projection and draws a fade overlay. */
extern void Gum_DirtyAllMatricies(void) __asm__("DirtyAllMatricies__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void func_019778(int a);
extern void func_072610(void *m);
extern float func_0734D8(float a);
extern void func_072638(float a, float b, float c, float d);
extern void func_073408(void);
extern void func_072A48(int a, int b, int c, int d);
extern void func_072658(int a);
extern void func_09CAB0(int a, int b, int c, int d);
extern void func_09CA60(int a, int b);
extern void func_028218(float *a, float *b);
extern void func_08E958(void *a, float *b, float *c, int d);
extern void func_098970(void);
extern void func_0991A8(int a);
extern void func_098E50(int a, int b);
extern void func_08FEF0(int a);
extern void func_08FF48(int a, int b, int c);
extern void func_02A860(void *a);
extern void func_09C100(int a, int b, int c, int d, int e, int f);
extern void func_097E70(int a, unsigned b);
extern float D_001FEDE0[16];
extern char D_001FEE30[];
extern char D_001EAF40[];

void func_02A4B0(void)
{
    float a[16];
    float b[16];

    func_019778(1);
    Gum_DirtyAllMatricies();
    Gum_UpdateMatrix();
    func_072610(D_001EAF40);
    func_072638(func_0734D8(0.5497787594795227f), 0.5497787594795227f, 1.0f, 10000.0f);
    func_073408();
    func_072A48(0, 0, 0, 0);
    func_072658(0);
    func_09CAB0(0x800, 0x800, 0x200, 0x1A0);
    func_09CA60(0x700, 0x730);
    dlib_ms_screen_matrix(D_001FEDE0, 0, 0, 0x200, -0x1A0, 0xFFFFFF, 0);
    func_028218(a, b);
    func_08E958(D_001EAF40, a, b, 0);
    Gum_MatrixMode(4);
    Gum_LoadMatrix(D_001FEDE0);
    func_098970();
    func_0991A8(0);
    func_098E50(0, 2);
    func_08FEF0(0);
    func_08FF48(0x1E, 0x1E, 0);
    func_02A860(D_001FEE30);
    func_09C100(0, 0, 1, 1, 0xFF0000, 0);
    func_0991A8(0);
    func_098E50(0, 2);
    func_08FF48(0x1F, 0x1F, 0);
    func_097E70(0, 0xFFFFFFFF);
}
