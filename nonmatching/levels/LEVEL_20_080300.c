/* LEVEL_20.REL:0x080300, bounded 48-byte body.
 * Pinned C links 44 against the 48-byte retail body; first
 * difference at byte +12 is the branch span. The retail
 * keeps an extra boolean value transfer before returning.
 * Reopen: recover source-value lifetime or qualify a compiler
 * route preserving it. Wide-return and local-result forms
 * and five qualified cc1 routes did not match.
 */
extern int D_00107818;
extern int D_0010781C;

int func_080300(void)
{
    return D_00107818 != -1 && D_0010781C != -1;
}
