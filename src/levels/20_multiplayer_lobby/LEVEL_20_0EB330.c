/* LEVEL_20:0x0EB330 -- placement copy of LEVEL_16_118F88.c: returns a four-int record, extrapolating its middle fields by a count unless a lookup matches. */
struct S {
    int a, b, c, d;
};
extern struct S D_00130CE8;
extern int func_0EB2E0(int n);
extern void func_0874F0(int id, struct S *s, float f);

struct S func_0EB330(int n)
{
    struct S a;
    struct S b;
    int d;

    a = D_00130CE8;
    if (n == func_0EB2E0(n)) {
        return a;
    }
    func_0874F0(0x231, &b, 0.0f);
    func_0874F0(0x232, &a, 0.0f);
    d = (a.b - b.b) * (n - 1);
    b.b += d;
    b.d += d;
    return b;
}
