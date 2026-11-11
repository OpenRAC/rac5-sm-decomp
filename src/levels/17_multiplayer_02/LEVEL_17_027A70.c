/* LEVEL_17:0x027A70 -- placement copy of LEVEL_01_02A6A8.c: fills two matrices, through a helper when the mode test passes, otherwise by copying default matrices. */

typedef struct {
    float f[16];
} Mat;

typedef struct {
    char pad_00[4];
} Ctx;

extern Mat D_001DE080;
extern Mat D_001DE0C0;
extern Ctx D_001B53D8;

extern int func_0277B8(int mode);
extern void func_103388(Mat *dst, Mat *src, Ctx *ctx);

void func_027A70(Mat *a, Mat *b)
{
    if (func_0277B8(4) != 0) {
        func_103388(a, &D_001DE080, &D_001B53D8);
        func_103388(b, &D_001DE0C0, &D_001B53D8);
    } else {
        *a = D_001DE080;
        *b = D_001DE0C0;
    }
}
