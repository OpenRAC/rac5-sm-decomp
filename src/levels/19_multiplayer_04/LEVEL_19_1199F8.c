/* LEVEL_19:0x1199F8 -- placement copy of LEVEL_16_119088.c: builds the interpolated record for a count, scaling the span between two looked-up records unless a mode check zeroes the scale. */
struct S {
    int a, b, c, d;
};
extern int D_001B968C;
extern struct S func_1198F8(int n);
extern int func_1198A8(int n);
extern void func_09C688(int id, struct S *s, float f);

struct S func_1199F8(int n, int scale)
{
    struct S out;
    struct S start;
    struct S end;
    struct S mid;
    struct S tmp;
    struct S res;
    int dx;
    int dy;

    func_09C688(0x233, &start, 0.0f);
    func_09C688(0x234, &tmp, 0.0f);
    dx = tmp.a - start.a;
    func_09C688(0x235, &end, 0.0f);
    func_09C688(0x236, &tmp, 0.0f);
    dy = tmp.a - end.a;
    res = func_1198F8(n);
    mid = res;
    if (func_1198A8(n)) {
        out = end;
        out.a += dy * scale;
        out.c += dy * scale;
    } else {
        if ((n == 7 && D_001B968C == 0) || (n == 4 && D_001B968C == 1) ||
            (n == 6 && D_001B968C == 2) || (n == 7 && D_001B968C == 3) ||
            (n == 6 && D_001B968C == 4) || (n == 7 && D_001B968C == 5))
            scale = 0;
        out = start;
        out.a += dx * scale;
        out.c += dx * scale;
        out.b = mid.b;
        out.d = mid.d;
    }
    return out;
}
