/* LEVEL_09.REL:0x0A45E0, bounded 48-byte body.
 * Pinned C links 44 against the 48-byte retail body; first
 * difference at byte +12 is the branch span. The retail
 * keeps an extra boolean value transfer before returning.
 * Reopen: recover source-value lifetime or qualify a compiler
 * route preserving it. Wide-return and local-result forms
 * and five qualified cc1 routes did not match.
 */
extern int D_001E0F68;
extern int D_001E0F6C;

int func_0A45E0(void)
{
    return D_001E0F68 != -1 && D_001E0F6C != -1;
}
