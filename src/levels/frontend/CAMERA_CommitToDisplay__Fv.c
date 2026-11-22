/* FRONTEND:0x000190 -- applies the camera viewport and loads the screen projection matrix. */
typedef struct Cam000190 {
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
} Cam000190;

extern Cam000190 *D_00027D00;
extern float D_0010A500[16];

extern void Dlib_ScreenMatrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");

void func_003E18(void *p);
void func_003E40(float a, float b, float c, float d);
void func_004870(void);
void func_003EB0(int a, int b, int c, int d);
void func_003E60(char *value);
void func_00A928(int a, int b, int c, int d);
void func_00A908(int first, int second);
void func_006120(int new_index);
void func_006200(char *src);
void func_006FA8(void);

void CAMERA_CommitToDisplay__Fv(void)
{
    int k;
    int vx;
    int vy;
    int w;
    int h;
    int x;

    k = 0x1000;
    func_003E18(D_00027D00);
    func_003E40(D_00027D00->f_F4, D_00027D00->f_F8, D_00027D00->f_10C, D_00027D00->f_110);
    func_004870();
    func_003EB0(0, 0, 0, 0);
    func_003E60(0);
    w = (int)D_00027D00->f_8C;
    h = (int)D_00027D00->f_88;
    x = (int)D_00027D00->f_84;
    vy = (k - w) / 2 - x;
    vx = (k - h) / 2;
    func_00A928(0x800, 0x800, h, w);
    func_00A908(vx, vy);
    Dlib_ScreenMatrix(D_0010A500, (int)D_00027D00->f_80, (int)D_00027D00->f_84, (int)D_00027D00->f_88, (int)-D_00027D00->f_8C, 0xFFFFFF, 0);
    func_006120(4);
    func_006200((char *)D_0010A500);
    func_006FA8();
}
