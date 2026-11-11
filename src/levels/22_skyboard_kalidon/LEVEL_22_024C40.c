/* LEVEL_22:0x024C40 -- placement copy of LEVEL_01_02A6A8.c: fills two matrices, through a helper when the mode test passes, otherwise by copying default matrices. */

typedef struct {
    float f[16];
} Mat;

typedef struct {
    char pad_00[4];
} Ctx;

extern Mat D_0018C2B0;
extern Mat D_0018C2F0;
extern Ctx D_0016A410;

extern int func_024988(int mode);
extern void func_0FD6F8(Mat *dst, Mat *src, Ctx *ctx);

void func_024C40(Mat *a, Mat *b)
{
    if (func_024988(4) != 0) {
        func_0FD6F8(a, &D_0018C2B0, &D_0016A410);
        func_0FD6F8(b, &D_0018C2F0, &D_0016A410);
    } else {
        *a = D_0018C2B0;
        *b = D_0018C2F0;
    }
}
