/* LEVEL_19:0x027C98 -- placement copy of LEVEL_01_02A6A8.c: fills two matrices, through a helper when the mode test passes, otherwise by copying default matrices. */

typedef struct {
    float f[16];
} Mat;

typedef struct {
    char pad_00[4];
} Ctx;

extern Mat D_001ECF00;
extern Mat D_001ECF40;
extern Ctx D_001C3158;

extern int func_0279E0(int mode);
extern void func_104488(Mat *dst, Mat *src, Ctx *ctx);

void func_027C98(Mat *a, Mat *b)
{
    if (func_0279E0(4) != 0) {
        func_104488(a, &D_001ECF00, &D_001C3158);
        func_104488(b, &D_001ECF40, &D_001C3158);
    } else {
        *a = D_001ECF00;
        *b = D_001ECF40;
    }
}
