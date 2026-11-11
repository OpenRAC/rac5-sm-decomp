/* LEVEL_04:0x02A150 -- placement copy of LEVEL_01_02A6A8.c: fills two matrices, through a helper when the mode test passes, otherwise by copying default matrices. */

typedef struct {
    float f[16];
} Mat;

typedef struct {
    char pad_00[4];
} Ctx;

extern Mat D_00254EC0;
extern Mat D_00254F00;
extern Ctx D_00226910;

extern int func_029E98(int mode);
extern void func_1310E8(Mat *dst, Mat *src, Ctx *ctx);

void func_02A150(Mat *a, Mat *b)
{
    if (func_029E98(4) != 0) {
        func_1310E8(a, &D_00254EC0, &D_00226910);
        func_1310E8(b, &D_00254F00, &D_00226910);
    } else {
        *a = D_00254EC0;
        *b = D_00254F00;
    }
}
