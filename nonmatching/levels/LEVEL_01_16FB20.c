/* USA LEVEL_01.REL:0x16FB20, 88-byte candidate (14 November 2026).
 * Measured pinned: 18 differing words; first difference at 0xC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Obj {
    char pad_00[0x64];
    int w_64;
};

void func_16FB20(void **a0, int a1)
{
    struct Obj *o;
    void (*fn)(struct Obj *);
    int w;
    void **q;

    q = a0 + a1;
    a0 = q;
    o = (struct Obj *)q[0];
    w = o->w_64;
    w = w & ~0x10;
    w = w & ~0x20;
    w = w & ~0x400;
    o->w_64 = w;
    fn = (void (*)(struct Obj *))a0[12];
    if (fn != 0) {
        fn(o);
    }
}
