/* LEVEL_19:0x1198F8 -- placement copy of LEVEL_16_118F88.c: returns a four-int record, extrapolating its middle fields by a count unless a lookup matches. */
struct S {
    int a, b, c, d;
};
extern struct S D_001D0E78;
extern int func_1198A8(int n);
extern void func_09C688(int id, struct S *s, float f);

struct S func_1198F8(int n)
{
    struct S a;
    struct S b;
    int d;

    a = D_001D0E78;
    if (n == func_1198A8(n)) {
        return a;
    }
    func_09C688(0x231, &b, 0.0f);
    func_09C688(0x232, &a, 0.0f);
    d = (a.b - b.b) * (n - 1);
    b.b += d;
    b.d += d;
    return b;
}
