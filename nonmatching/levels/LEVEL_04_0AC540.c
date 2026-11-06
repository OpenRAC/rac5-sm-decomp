/* LEVEL_04.REL:0x0AC540, bounded 48-byte body.
 * Pinned C links 44 against the 48-byte retail body; first
 * difference at byte +12 is the branch span. The retail
 * keeps an extra boolean value transfer before returning.
 * Reopen: recover source-value lifetime or qualify a compiler
 * route preserving it. Wide-return and local-result forms
 * and five qualified cc1 routes did not match.
 */
extern int D_00210628;
extern int D_0021062C;

int func_0AC540(void)
{
    return D_00210628 != -1 && D_0021062C != -1;
}
