/* LEVEL_17:0x118A00 -- placement copy of LEVEL_16_119088.c: builds the interpolated record for a count, scaling the span between two looked-up records unless a mode check zeroes the scale. */
struct S {
    int a, b, c, d;
};
extern int D_001ABB0C;
extern struct S func_118900(int n);
extern int func_1188B0(int n);
extern void func_09C2F0(int id, struct S *s, float f);

struct S func_118A00(int n, int scale)
{
    struct S out;
    struct S start;
    struct S end;
    struct S mid;
    struct S tmp;
    struct S res;
    int dx;
    int dy;

    func_09C2F0(0x233, &start, 0.0f);
    func_09C2F0(0x234, &tmp, 0.0f);
    dx = tmp.a - start.a;
    func_09C2F0(0x235, &end, 0.0f);
    func_09C2F0(0x236, &tmp, 0.0f);
    dy = tmp.a - end.a;
    res = func_118900(n);
    mid = res;
    if (func_1188B0(n)) {
        out = end;
        out.a += dy * scale;
        out.c += dy * scale;
    } else {
        if ((n == 7 && D_001ABB0C == 0) || (n == 4 && D_001ABB0C == 1) ||
            (n == 6 && D_001ABB0C == 2) || (n == 7 && D_001ABB0C == 3) ||
            (n == 6 && D_001ABB0C == 4) || (n == 7 && D_001ABB0C == 5))
            scale = 0;
        out = start;
        out.a += dx * scale;
        out.c += dx * scale;
        out.b = mid.b;
        out.d = mid.d;
    }
    return out;
}
