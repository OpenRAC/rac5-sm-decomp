/* LEVEL_01:0x098FD0 -- stores a pair of 4x4 matrices into both slots of an indexed bank and registers each slot with its three scalar parameters and the decomposed values. */
typedef struct {
    unsigned char b[64];
} Mat;

typedef struct {
    char pad[0xE4];
} Slot;

extern char D_0029AFB0[];

extern void func_0A5D38(int *first, int *second, int *third, int *fourth);
extern void func_0A5D00(int *first, int *second);
extern void func_098E68(Slot *s, float w, float f0, float f1, int a, int b, int c, int d, int e, int f, int idx);

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
    *(Mat *)(D_0029AFB0 + off) = *m0;
    *(Mat *)(D_0029AFB0 + off + 0x40) = *m1;
    func_0A5D38(&v0, &v1, &v2, &v3);
    func_0A5D00(&u0, &u1);
    *(int *)(D_0029AFB0 + off + 0x9C) = 0;
    sl = (Slot *)(D_0029AFB0 + off - 0x40);
    func_098E68(sl, *(float *)(D_0029AFB0 + off + 0x9C), f0, f5, v0, v1, v2, v3, u0, u1, idx);
    *(Mat *)(D_0029AFB0 + off + 0xE4) = *m0;
    *(Mat *)(D_0029AFB0 + off + 0x124) = *m1;
    func_0A5D38(&x0, &x1, &x2, &x3);
    func_0A5D00(&y0, &y1);
    *(int *)(D_0029AFB0 + off + 0x180) = 0;
    func_098E68(sl + 1, *(float *)(D_0029AFB0 + off + 0x180), f0, f5, x0, x1, x2, x3, y0, y1, idx);
}
