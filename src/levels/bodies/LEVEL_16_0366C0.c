/* LEVEL_16:0x0366C0 -- calls a helper for indices 0..5, then clears one word field. */
struct S0366C0 {
    char pad0[0x5D0];
    int f5D0;
};

extern void func_036588(struct S0366C0 *p, unsigned int i);

void func_0366C0(struct S0366C0 *p)
{
    unsigned int i;

    for (i = 0; i < 6; i++) {
        func_036588(p, i);
    }
    p->f5D0 = 0;
}
