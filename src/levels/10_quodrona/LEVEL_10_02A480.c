/* LEVEL_10:0x02A480 -- placement copy of LEVEL_01_02A6A8.c: fills two matrices, through a helper when the mode test passes, otherwise by copying default matrices. */

typedef struct {
    float f[16];
} Mat;

typedef struct {
    char pad_00[4];
} Ctx;

extern Mat D_00243AB0;
extern Mat D_00243AF0;
extern Ctx D_00215F10;

extern int func_02A1C8(int mode);
extern void func_123238(Mat *dst, Mat *src, Ctx *ctx);

void func_02A480(Mat *a, Mat *b)
{
    if (func_02A1C8(4) != 0) {
        func_123238(a, &D_00243AB0, &D_00215F10);
        func_123238(b, &D_00243AF0, &D_00215F10);
    } else {
        *a = D_00243AB0;
        *b = D_00243AF0;
    }
}
