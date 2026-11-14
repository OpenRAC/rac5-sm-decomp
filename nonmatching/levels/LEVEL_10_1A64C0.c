/* USA LEVEL_10.REL:0x1A64C0, 64-byte candidate (14 November 2026).
 * Measured pinned: 0 differing words; first difference at prototype-conflict.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern unsigned int D_002A12EC;
extern int D_00211934;
extern int func_0EC9A8(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);

void func_1A64C0(void)
{
    D_00211934 = func_0EC9A8(0x10, D_002A12EC, 0, 0, 0, 0, 1);
}
