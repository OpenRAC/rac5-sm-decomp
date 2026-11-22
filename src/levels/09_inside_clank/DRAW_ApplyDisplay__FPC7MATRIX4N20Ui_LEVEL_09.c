/* LEVEL_09:0x095880 -- placement copy of LEVEL_01_098FD0.c: stores a pair of 4x4 matrices into both slots of an indexed bank and registers each slot with its three scalar parameters and the decomposed values. */
typedef struct {
    unsigned char b[64];
} Mat;

typedef struct {
    char pad[0xE4];
} Slot;

extern char D_00282730[];

extern void func_0A2FE8(int *first, int *second, int *third, int *fourth);
extern void func_0A2FB0(int *first, int *second);
extern void func_095718(Slot *s, float w, float f0, float f1, int a, int b, int c, int d, int e, int f, int idx);

void DRAW_ApplyDisplay__FPC7MATRIX4N20Ui(Mat *m0, float *f, Mat *m1, int idx)
{
    int v0, v1, v2, v3;
    int u0, u1;
    int x0, x1, x2, x3;
    int y0, y1;
    float f0;
    float f5;
    int off;
    Slot *sl;

    off = idx * 0x170C;
    f0 = f[0];
    f5 = f[5];
    *(Mat *)(D_00282730 + off) = *m0;
    *(Mat *)(D_00282730 + off + 0x40) = *m1;
    func_0A2FE8(&v0, &v1, &v2, &v3);
    func_0A2FB0(&u0, &u1);
    *(int *)(D_00282730 + off + 0x9C) = 0;
    sl = (Slot *)(D_00282730 + off - 0x40);
    func_095718(sl, *(float *)(D_00282730 + off + 0x9C), f0, f5, v0, v1, v2, v3, u0, u1, idx);
    *(Mat *)(D_00282730 + off + 0xE4) = *m0;
    *(Mat *)(D_00282730 + off + 0x124) = *m1;
    func_0A2FE8(&x0, &x1, &x2, &x3);
    func_0A2FB0(&y0, &y1);
    *(int *)(D_00282730 + off + 0x180) = 0;
    func_095718(sl + 1, *(float *)(D_00282730 + off + 0x180), f0, f5, x0, x1, x2, x3, y0, y1, idx);
}
