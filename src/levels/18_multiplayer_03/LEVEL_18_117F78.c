/* LEVEL_18:0x117F78 -- placement copy of LEVEL_16_118F88.c: returns a four-int record, extrapolating its middle fields by a count unless a lookup matches. */
struct S {
    int a, b, c, d;
};
extern struct S D_001D11F8;
extern int func_117F28(int n);
extern void func_09BE08(int id, struct S *s, float f);

struct S func_117F78(int n)
{
    struct S a;
    struct S b;
    int d;

    a = D_001D11F8;
    if (n == func_117F28(n)) {
        return a;
    }
    func_09BE08(0x231, &b, 0.0f);
    func_09BE08(0x232, &a, 0.0f);
    d = (a.b - b.b) * (n - 1);
    b.b += d;
    b.d += d;
    return b;
}
