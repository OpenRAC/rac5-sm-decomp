/* LEVEL_18:0x0276A0 -- placement copy of LEVEL_01_02A6A8.c: fills two matrices, through a helper when the mode test passes, otherwise by copying default matrices. */

typedef struct {
    float f[16];
} Mat;

typedef struct {
    char pad_00[4];
} Ctx;

extern Mat D_001ED100;
extern Mat D_001ED140;
extern Ctx D_001C34D8;

extern int func_0273E8(int mode);
extern void func_102640(Mat *dst, Mat *src, Ctx *ctx);

void func_0276A0(Mat *a, Mat *b)
{
    if (func_0273E8(4) != 0) {
        func_102640(a, &D_001ED100, &D_001C34D8);
        func_102640(b, &D_001ED140, &D_001C34D8);
    } else {
        *a = D_001ED100;
        *b = D_001ED140;
    }
}
