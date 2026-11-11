/* LEVEL_08:0x02AC20 -- placement copy of LEVEL_01_02A6A8.c: fills two matrices, through a helper when the mode test passes, otherwise by copying default matrices. */

typedef struct {
    float f[16];
} Mat;

typedef struct {
    char pad_00[4];
} Ctx;

extern Mat D_00289940;
extern Mat D_00289980;
extern Ctx D_00256C10;

extern int func_02A968(int mode);
extern void func_1363B8(Mat *dst, Mat *src, Ctx *ctx);

void func_02AC20(Mat *a, Mat *b)
{
    if (func_02A968(4) != 0) {
        func_1363B8(a, &D_00289940, &D_00256C10);
        func_1363B8(b, &D_00289980, &D_00256C10);
    } else {
        *a = D_00289940;
        *b = D_00289980;
    }
}
