/* LEVEL_02:0x02AE70 -- placement copy of LEVEL_01_02A6A8.c: fills two matrices, through a helper when the mode test passes, otherwise by copying default matrices. */

typedef struct {
    float f[16];
} Mat;

typedef struct {
    char pad_00[4];
} Ctx;

extern Mat D_00251BC0;
extern Mat D_00251C00;
extern Ctx D_00221F10;

extern int func_02ABB8(int mode);
extern void func_12B268(Mat *dst, Mat *src, Ctx *ctx);

void func_02AE70(Mat *a, Mat *b)
{
    if (func_02ABB8(4) != 0) {
        func_12B268(a, &D_00251BC0, &D_00221F10);
        func_12B268(b, &D_00251C00, &D_00221F10);
    } else {
        *a = D_00251BC0;
        *b = D_00251C00;
    }
}
