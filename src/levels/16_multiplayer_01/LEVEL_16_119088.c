/* LEVEL_16:0x119088 -- builds the interpolated record for a count, scaling the span between two looked-up records unless a mode check zeroes the scale. */
struct S {
    int a, b, c, d;
};
extern int D_001B8514;
extern struct S func_118F88(int n);
extern int func_118F38(int n);
extern void func_09CDF8(int id, struct S *s, float f);

struct S func_119088(int n, int scale)
{
    struct S out;
    struct S start;
    struct S end;
    struct S mid;
    struct S tmp;
    struct S res;
    int dx;
    int dy;

    func_09CDF8(0x233, &start, 0.0f);
    func_09CDF8(0x234, &tmp, 0.0f);
    dx = tmp.a - start.a;
    func_09CDF8(0x235, &end, 0.0f);
    func_09CDF8(0x236, &tmp, 0.0f);
    dy = tmp.a - end.a;
    res = func_118F88(n);
    mid = res;
    if (func_118F38(n)) {
        out = end;
        out.a += dy * scale;
        out.c += dy * scale;
    } else {
        if ((n == 7 && D_001B8514 == 0) || (n == 4 && D_001B8514 == 1) ||
            (n == 6 && D_001B8514 == 2) || (n == 7 && D_001B8514 == 3) ||
            (n == 6 && D_001B8514 == 4) || (n == 7 && D_001B8514 == 5))
            scale = 0;
        out = start;
        out.a += dx * scale;
        out.c += dx * scale;
        out.b = mid.b;
        out.d = mid.d;
    }
    return out;
}
