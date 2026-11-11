/* LEVEL_05:0x029320 -- placement copy of LEVEL_01_02A6A8.c: fills two matrices, through a helper when the mode test passes, otherwise by copying default matrices. */

typedef struct {
    float f[16];
} Mat;

typedef struct {
    char pad_00[4];
} Ctx;

extern Mat D_00226570;
extern Mat D_002265B0;
extern Ctx D_001FBE90;

extern int func_029068(int mode);
extern void func_120DF0(Mat *dst, Mat *src, Ctx *ctx);

void func_029320(Mat *a, Mat *b)
{
    if (func_029068(4) != 0) {
        func_120DF0(a, &D_00226570, &D_001FBE90);
        func_120DF0(b, &D_002265B0, &D_001FBE90);
    } else {
        *a = D_00226570;
        *b = D_002265B0;
    }
}
