/* LEVEL_09:0x029510 -- placement copy of LEVEL_01_02A6A8.c: fills two matrices, through a helper when the mode test passes, otherwise by copying default matrices. */

typedef struct {
    float f[16];
} Mat;

typedef struct {
    char pad_00[4];
} Ctx;

extern Mat D_00221E30;
extern Mat D_00221E70;
extern Ctx D_001F6B90;

extern int func_029258(int mode);
extern void func_11E410(Mat *dst, Mat *src, Ctx *ctx);

void func_029510(Mat *a, Mat *b)
{
    if (func_029258(4) != 0) {
        func_11E410(a, &D_00221E30, &D_001F6B90);
        func_11E410(b, &D_00221E70, &D_001F6B90);
    } else {
        *a = D_00221E30;
        *b = D_00221E70;
    }
}
