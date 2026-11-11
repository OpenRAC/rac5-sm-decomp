/* LEVEL_16:0x118F88 -- returns a four-int record, extrapolating its middle fields by a count unless a lookup matches. */
struct S {
    int a, b, c, d;
};
extern struct S D_001CFC78;
extern int func_118F38(int n);
extern void func_09CDF8(int id, struct S *s, float f);

struct S func_118F88(int n)
{
    struct S a;
    struct S b;
    int d;

    a = D_001CFC78;
    if (n == func_118F38(n)) {
        return a;
    }
    func_09CDF8(0x231, &b, 0.0f);
    func_09CDF8(0x232, &a, 0.0f);
    d = (a.b - b.b) * (n - 1);
    b.b += d;
    b.d += d;
    return b;
}
