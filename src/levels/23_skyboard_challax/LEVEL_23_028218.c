/* LEVEL_23:0x028218 -- placement copy of LEVEL_01_02A6A8.c: fills two matrices, through a helper when the mode test passes, otherwise by copying default matrices. */

typedef struct {
    float f[16];
} Mat;

typedef struct {
    char pad_00[4];
} Ctx;

extern Mat D_00207B30;
extern Mat D_00207B70;
extern Ctx D_001E0110;

extern int func_027F60(int mode);
extern void func_115DD8(Mat *dst, Mat *src, Ctx *ctx);

void func_028218(Mat *a, Mat *b)
{
    if (func_027F60(4) != 0) {
        func_115DD8(a, &D_00207B30, &D_001E0110);
        func_115DD8(b, &D_00207B70, &D_001E0110);
    } else {
        *a = D_00207B30;
        *b = D_00207B70;
    }
}
