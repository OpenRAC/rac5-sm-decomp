/* LEVEL_19.REL:0x095498, bounded 48-byte body.
 * Pinned C links 44 against the 48-byte retail body; first
 * difference at byte +12 is the branch span. The retail
 * keeps an extra boolean value transfer before returning.
 * Reopen: recover source-value lifetime or qualify a compiler
 * route preserving it. Wide-return and local-result forms
 * and five qualified cc1 routes did not match.
 */
extern int D_001A62B8;
extern int D_001A62BC;

int func_095498(void)
{
    return D_001A62B8 != -1 && D_001A62BC != -1;
}
