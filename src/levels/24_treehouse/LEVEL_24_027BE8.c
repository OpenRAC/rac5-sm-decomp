/* LEVEL_24:0x027BE8 -- placement copy of LEVEL_01_02A6A8.c: fills two matrices, through a helper when the mode test passes, otherwise by copying default matrices. */

typedef struct {
    float f[16];
} Mat;

typedef struct {
    char pad_00[4];
} Ctx;

extern Mat D_002065B0;
extern Mat D_002065F0;
extern Ctx D_001DDD10;

extern int func_027930(int mode);
extern void func_11AEE0(Mat *dst, Mat *src, Ctx *ctx);

void func_027BE8(Mat *a, Mat *b)
{
    if (func_027930(4) != 0) {
        func_11AEE0(a, &D_002065B0, &D_001DDD10);
        func_11AEE0(b, &D_002065F0, &D_001DDD10);
    } else {
        *a = D_002065B0;
        *b = D_002065F0;
    }
}
