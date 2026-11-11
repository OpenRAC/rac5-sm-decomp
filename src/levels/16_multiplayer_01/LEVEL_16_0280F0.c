/* LEVEL_16:0x0280F0 -- placement copy of LEVEL_01_02A6A8.c: fills two matrices, through a helper when the mode test passes, otherwise by copying default matrices. */

typedef struct {
    float f[16];
} Mat;

typedef struct {
    char pad_00[4];
} Ctx;

extern Mat D_001ECD80;
extern Mat D_001ECDC0;
extern Ctx D_001C1F58;

extern int func_027E38(int mode);
extern void func_103D78(Mat *dst, Mat *src, Ctx *ctx);

void func_0280F0(Mat *a, Mat *b)
{
    if (func_027E38(4) != 0) {
        func_103D78(a, &D_001ECD80, &D_001C1F58);
        func_103D78(b, &D_001ECDC0, &D_001C1F58);
    } else {
        *a = D_001ECD80;
        *b = D_001ECDC0;
    }
}
