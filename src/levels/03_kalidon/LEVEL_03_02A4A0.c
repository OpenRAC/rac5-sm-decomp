/* LEVEL_03:0x02A4A0 -- placement copy of LEVEL_01_02A6A8.c: fills two matrices, through a helper when the mode test passes, otherwise by copying default matrices. */

typedef struct {
    float f[16];
} Mat;

typedef struct {
    char pad_00[4];
} Ctx;

extern Mat D_00255530;
extern Mat D_00255570;
extern Ctx D_00225E90;

extern int func_02A1E8(int mode);
extern void func_123310(Mat *dst, Mat *src, Ctx *ctx);

void func_02A4A0(Mat *a, Mat *b)
{
    if (func_02A1E8(4) != 0) {
        func_123310(a, &D_00255530, &D_00225E90);
        func_123310(b, &D_00255570, &D_00225E90);
    } else {
        *a = D_00255530;
        *b = D_00255570;
    }
}
