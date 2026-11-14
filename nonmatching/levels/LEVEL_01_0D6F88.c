/* USA LEVEL_01.REL:0x0D6F88, 92-byte candidate (14 November 2026).
 * Measured pinned: 10 differing words; first difference at 0x28.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern unsigned int D_00206654;
extern void func_01B770(unsigned int arg);

void func_0D6F88(unsigned int level)
{
    if (D_00206654 == 0 && level != 0)
        func_01B770(level);
    D_00206654 = level > 1 ? level : 2;
}
