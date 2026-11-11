/* LEVEL_06:0x028A90 -- placement copy of LEVEL_01_02A6A8.c: fills two matrices, through a helper when the mode test passes, otherwise by copying default matrices. */

typedef struct {
    float f[16];
} Mat;

typedef struct {
    char pad_00[4];
} Ctx;

extern Mat D_00227430;
extern Mat D_00227470;
extern Ctx D_001FBE10;

extern int func_0287D8(int mode);
extern void func_11B638(Mat *dst, Mat *src, Ctx *ctx);

void func_028A90(Mat *a, Mat *b)
{
    if (func_0287D8(4) != 0) {
        func_11B638(a, &D_00227430, &D_001FBE10);
        func_11B638(b, &D_00227470, &D_001FBE10);
    } else {
        *a = D_00227430;
        *b = D_00227470;
    }
}
