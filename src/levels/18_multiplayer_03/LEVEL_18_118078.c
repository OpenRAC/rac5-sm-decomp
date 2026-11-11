/* LEVEL_18:0x118078 -- placement copy of LEVEL_16_119088.c: builds the interpolated record for a count, scaling the span between two looked-up records unless a mode check zeroes the scale. */
struct S {
    int a, b, c, d;
};
extern int D_001B9994;
extern struct S func_117F78(int n);
extern int func_117F28(int n);
extern void func_09BE08(int id, struct S *s, float f);

struct S func_118078(int n, int scale)
{
    struct S out;
    struct S start;
    struct S end;
    struct S mid;
    struct S tmp;
    struct S res;
    int dx;
    int dy;

    func_09BE08(0x233, &start, 0.0f);
    func_09BE08(0x234, &tmp, 0.0f);
    dx = tmp.a - start.a;
    func_09BE08(0x235, &end, 0.0f);
    func_09BE08(0x236, &tmp, 0.0f);
    dy = tmp.a - end.a;
    res = func_117F78(n);
    mid = res;
    if (func_117F28(n)) {
        out = end;
        out.a += dy * scale;
        out.c += dy * scale;
    } else {
        if ((n == 7 && D_001B9994 == 0) || (n == 4 && D_001B9994 == 1) ||
            (n == 6 && D_001B9994 == 2) || (n == 7 && D_001B9994 == 3) ||
            (n == 6 && D_001B9994 == 4) || (n == 7 && D_001B9994 == 5))
            scale = 0;
        out = start;
        out.a += dx * scale;
        out.c += dx * scale;
        out.b = mid.b;
        out.d = mid.d;
    }
    return out;
}
