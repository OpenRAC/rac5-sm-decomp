/* LEVEL_20:0x0EB430 -- placement copy of LEVEL_16_119088.c: builds the interpolated record for a count, scaling the span between two looked-up records unless a mode check zeroes the scale. */
struct S {
    int a, b, c, d;
};
extern int D_0011ABB4;
extern struct S func_0EB330(int n);
extern int func_0EB2E0(int n);
extern void func_0874F0(int id, struct S *s, float f);

struct S func_0EB430(int n, int scale)
{
    struct S out;
    struct S start;
    struct S end;
    struct S mid;
    struct S tmp;
    struct S res;
    int dx;
    int dy;

    func_0874F0(0x233, &start, 0.0f);
    func_0874F0(0x234, &tmp, 0.0f);
    dx = tmp.a - start.a;
    func_0874F0(0x235, &end, 0.0f);
    func_0874F0(0x236, &tmp, 0.0f);
    dy = tmp.a - end.a;
    res = func_0EB330(n);
    mid = res;
    if (func_0EB2E0(n)) {
        out = end;
        out.a += dy * scale;
        out.c += dy * scale;
    } else {
        if ((n == 7 && D_0011ABB4 == 0) || (n == 4 && D_0011ABB4 == 1) ||
            (n == 6 && D_0011ABB4 == 2) || (n == 7 && D_0011ABB4 == 3) ||
            (n == 6 && D_0011ABB4 == 4) || (n == 7 && D_0011ABB4 == 5))
            scale = 0;
        out = start;
        out.a += dx * scale;
        out.c += dx * scale;
        out.b = mid.b;
        out.d = mid.d;
    }
    return out;
}
