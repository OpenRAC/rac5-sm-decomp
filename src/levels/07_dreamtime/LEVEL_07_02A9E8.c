/* LEVEL_07:0x02A9E8 -- placement copy of LEVEL_01_02A6A8.c: fills two matrices, through a helper when the mode test passes, otherwise by copying default matrices. */

typedef struct {
    float f[16];
} Mat;

typedef struct {
    char pad_00[4];
} Ctx;

extern Mat D_0024FFB0;
extern Mat D_0024FFF0;
extern Ctx D_00221C90;

extern int func_02A730(int mode);
extern void func_128350(Mat *dst, Mat *src, Ctx *ctx);

void func_02A9E8(Mat *a, Mat *b)
{
    if (func_02A730(4) != 0) {
        func_128350(a, &D_0024FFB0, &D_00221C90);
        func_128350(b, &D_0024FFF0, &D_00221C90);
    } else {
        *a = D_0024FFB0;
        *b = D_0024FFF0;
    }
}
