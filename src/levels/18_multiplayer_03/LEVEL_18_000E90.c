/* LEVEL_18:0x000E90 -- placement copy of LEVEL_16_000E20.c: applies the camera viewport and loads the screen projection matrix; then a stub returning its fourth argument. */

typedef struct Cam000E20 {
    char pad_00[0x80];
    float f_80;
    float f_84;
    float f_88;
    float f_8C;
    char pad_90[0x64];
    float f_F4;
    float f_F8;
    char pad_FC[0x10];
    float f_10C;
    float f_110;
} Cam000E20;

extern Cam000E20 *D_0019C14C;
extern float D_001DA910[16];

extern void Dlib_ScreenMatrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");

void func_06DC00(Cam000E20 *cam);
void func_06DC28(float a, float b, float c, float d);
void func_06E9A0(void);
void func_06DFE0(int a, int b, int c, int d);
void func_06DC48(char *a);
void func_093EC0(int a, int b, int c, int d);
void func_093E70(int a, int b);
void func_08FEA0(void);

void func_000E90(void)
{
    int k;
    int vx;
    int vy;
    int w;
    int h;
    int x;

    k = 0x1000;
    func_06DC00(D_0019C14C);
    func_06DC28(D_0019C14C->f_F4, D_0019C14C->f_F8, D_0019C14C->f_10C, D_0019C14C->f_110);
    func_06E9A0();
    func_06DFE0(0, 0, 0, 0);
    func_06DC48(0);
    w = (int)D_0019C14C->f_8C;
    h = (int)D_0019C14C->f_88;
    x = (int)D_0019C14C->f_84;
    vy = (k - w) / 2 - x;
    vx = (k - h) / 2;
    func_093EC0(0x800, 0x800, h, w);
    func_093E70(vx, vy);
    Dlib_ScreenMatrix(D_001DA910, (int)D_0019C14C->f_80, (int)D_0019C14C->f_84, (int)D_0019C14C->f_88, (int)-D_0019C14C->f_8C, 0xFFFFFF, 0);
    Gum_MatrixMode(4);
    Gum_LoadMatrix(D_001DA910);
    func_08FEA0();
}

int func_000FD8(int a, int b, int c, int d)
{
    return d;
}
