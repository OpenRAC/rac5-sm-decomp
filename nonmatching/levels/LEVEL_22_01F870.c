/* LEVEL_22.REL:0x01F870, bounded 44-byte body.
 * Pinned C links 44 bytes but first differs at byte +0:
 * the optimizer folds the separate nonzero and upper-bound
 * tests into one adjusted unsigned range comparison.
 * Reopen: recover a natural source condition or qualified
 * compiler route preserving the two retail checks. Nested
 * forms, five other cc1 routes and scoped flags did not.
 */
extern void *D_001528A8[];

void *func_01F870(unsigned int index)
{
    if (index != 0 && index < 43)
        return D_001528A8[index];
    return 0;
}
