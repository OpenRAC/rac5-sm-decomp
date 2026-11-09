/* LEVEL_20:0x024BF8 -- placement copy of LEVEL_01_02A6A8.c: fills two matrices, through a helper when the mode test passes, otherwise by copying default matrices. */

typedef struct {
    float f[16];
} Mat;

typedef struct {
    char pad_00[4];
} Ctx;

extern Mat D_001445F0;
extern Mat D_00144630;
extern Ctx D_00122FD8;

extern int func_024940(int mode);
extern void func_0DC2B0(Mat *dst, Mat *src, Ctx *ctx);

void func_024BF8(Mat *a, Mat *b)
{
    if (func_024940(4) != 0) {
        func_0DC2B0(a, &D_001445F0, &D_00122FD8);
        func_0DC2B0(b, &D_00144630, &D_00122FD8);
    } else {
        *a = D_001445F0;
        *b = D_00144630;
    }
}
