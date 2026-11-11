/* LEVEL_01:0x02A6A8 -- fills two matrices, through a helper when the mode test passes, otherwise by copying default matrices. */

typedef struct {
    float f[16];
} Mat;

typedef struct {
    char pad_00[4];
} Ctx;

extern Mat D_0023A6B0;
extern Mat D_0023A6F0;
extern Ctx D_0020CF90;

extern int func_02A3F0(int mode);
extern void func_125128(Mat *dst, Mat *src, Ctx *ctx);

void func_02A6A8(Mat *a, Mat *b)
{
    if (func_02A3F0(4) != 0) {
        func_125128(a, &D_0023A6B0, &D_0020CF90);
        func_125128(b, &D_0023A6F0, &D_0020CF90);
    } else {
        *a = D_0023A6B0;
        *b = D_0023A6F0;
    }
}
