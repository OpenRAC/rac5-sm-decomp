/* LEVEL_21:0x023E80 -- placement copy of LEVEL_01_02A6A8.c: fills two matrices, through a helper when the mode test passes, otherwise by copying default matrices. */

typedef struct {
    float f[16];
} Mat;

typedef struct {
    char pad_00[4];
} Ctx;

extern Mat D_00182720;
extern Mat D_00182760;
extern Ctx D_00161710;

extern int func_023BC8(int mode);
extern void func_0EA288(Mat *dst, Mat *src, Ctx *ctx);

void func_023E80(Mat *a, Mat *b)
{
    if (func_023BC8(4) != 0) {
        func_0EA288(a, &D_00182720, &D_00161710);
        func_0EA288(b, &D_00182760, &D_00161710);
    } else {
        *a = D_00182720;
        *b = D_00182760;
    }
}
