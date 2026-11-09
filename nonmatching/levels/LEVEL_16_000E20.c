/* LEVEL_16.REL:0x000E20: reviewed 336-byte candidate, held for ABI review.
 * Applies the camera viewport and loads the screen projection matrix; then a
 * stub returning its fourth argument.
 * pinned C with gnu-ee-trial links 336/336 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_06E510 returning void with (int), but the accepted
 * LEVEL_16_06E510.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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

extern Cam000E20 *D_0019ACCC;
extern float D_001DA590[16];

extern void Dlib_ScreenMatrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");

void func_06E4C8(Cam000E20 *cam);
void func_06E4F0(float a, float b, float c, float d);
void func_06F2D8(void);
void func_06E918(int a, int b, int c, int d);
void func_06E510(int a);
void func_094EB0(int a, int b, int c, int d);
void func_094E60(int a, int b);
void func_090E90(void);

void func_000E20(void)
{
    int k;
    int vx;
    int vy;
    int w;
    int h;
    int x;

    k = 0x1000;
    func_06E4C8(D_0019ACCC);
    func_06E4F0(D_0019ACCC->f_F4, D_0019ACCC->f_F8, D_0019ACCC->f_10C, D_0019ACCC->f_110);
    func_06F2D8();
    func_06E918(0, 0, 0, 0);
    func_06E510(0);
    w = (int)D_0019ACCC->f_8C;
    h = (int)D_0019ACCC->f_88;
    x = (int)D_0019ACCC->f_84;
    vy = (k - w) / 2 - x;
    vx = (k - h) / 2;
    func_094EB0(0x800, 0x800, h, w);
    func_094E60(vx, vy);
    Dlib_ScreenMatrix(D_001DA590, (int)D_0019ACCC->f_80, (int)D_0019ACCC->f_84, (int)D_0019ACCC->f_88, (int)-D_0019ACCC->f_8C, 0xFFFFFF, 0);
    Gum_MatrixMode(4);
    Gum_LoadMatrix(D_001DA590);
    func_090E90();
}

int func_000F68(int a, int b, int c, int d)
{
    return d;
}
