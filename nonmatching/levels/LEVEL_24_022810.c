/* LEVEL_24.REL:0x022810, bounded 44-byte body.
 * Pinned C links 44 bytes but first differs at byte +0:
 * the optimizer folds the separate nonzero and upper-bound
 * tests into one adjusted unsigned range comparison.
 * Reopen: recover a natural source condition or qualified
 * compiler route preserving the two retail checks. Nested
 * forms, five other cc1 routes and scoped flags did not.
 */
extern void *D_001C41A8[];

void *func_022810(unsigned int index)
{
    if (index != 0 && index < 43)
        return D_001C41A8[index];
    return 0;
}
