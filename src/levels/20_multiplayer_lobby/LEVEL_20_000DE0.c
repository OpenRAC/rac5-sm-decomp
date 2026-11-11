/* LEVEL_20:0x000DE0 -- placement copy of LEVEL_16_000E20.c: applies the camera viewport and loads the screen projection matrix; then a stub returning its fourth argument. */

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

extern Cam000E20 *D_000FD3B4;
extern float D_00131F10[16];

extern void Dlib_ScreenMatrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");

void func_05D6D8(Cam000E20 *cam);
void func_05D700(float a, float b, float c, float d);
void func_05E2E0(void);
void func_05D920(int a, int b, int c, int d);
void func_05D720(char *a);
void func_07F5A8(int a, int b, int c, int d);
void func_07F558(int a, int b);
void func_07B588(void);

void func_000DE0(void)
{
    int k;
    int vx;
    int vy;
    int w;
    int h;
    int x;

    k = 0x1000;
    func_05D6D8(D_000FD3B4);
    func_05D700(D_000FD3B4->f_F4, D_000FD3B4->f_F8, D_000FD3B4->f_10C, D_000FD3B4->f_110);
    func_05E2E0();
    func_05D920(0, 0, 0, 0);
    func_05D720(0);
    w = (int)D_000FD3B4->f_8C;
    h = (int)D_000FD3B4->f_88;
    x = (int)D_000FD3B4->f_84;
    vy = (k - w) / 2 - x;
    vx = (k - h) / 2;
    func_07F5A8(0x800, 0x800, h, w);
    func_07F558(vx, vy);
    Dlib_ScreenMatrix(D_00131F10, (int)D_000FD3B4->f_80, (int)D_000FD3B4->f_84, (int)D_000FD3B4->f_88, (int)-D_000FD3B4->f_8C, 0xFFFFFF, 0);
    Gum_MatrixMode(4);
    Gum_LoadMatrix(D_00131F10);
    func_07B588();
}

int func_000F28(int a, int b, int c, int d)
{
    return d;
}
