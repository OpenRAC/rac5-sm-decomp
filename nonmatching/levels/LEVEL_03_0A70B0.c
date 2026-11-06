/* LEVEL_03.REL:0x0A70B0, bounded 48-byte body.
 * Pinned C links 44 against the 48-byte retail body; first
 * difference at byte +12 is the branch span. The retail
 * keeps an extra boolean value transfer before returning.
 * Reopen: recover source-value lifetime or qualify a compiler
 * route preserving it. Wide-return and local-result forms
 * and five qualified cc1 routes did not match.
 */
extern int D_0020F7E8;
extern int D_0020F7EC;

int func_0A70B0(void)
{
    return D_0020F7E8 != -1 && D_0020F7EC != -1;
}
