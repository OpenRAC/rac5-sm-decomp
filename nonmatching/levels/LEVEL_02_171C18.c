/* USA LEVEL_02.REL:0x171C18, 68-byte candidate (14 November 2026).
 * Measured pinned: 12 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int D_0024CBEC;
extern void func_040AF8(int a, int b, int c, int d, int e);

int func_171C18(int handle, int a, int b, int c, int d, int e)
{
    int r = 1;

    if (handle == D_0024CBEC) {
        func_040AF8(a, b, c, d, e);
        r = 2;
    }
    return r;
}
