/* LEVEL_18.REL:0x022728, bounded 44-byte body.
 * Pinned C links 44 bytes but first differs at body byte +8:
 * the first branch span and second global-address setup use a
 * different schedule from the retail two-global zero test.
 * Reopen: recover a source flow or qualified compiler route
 * that preserves the retail second load and return blocks.
 * Nested/typed forms, five cc1 routes and scoped flags did not.
 */
extern int D_001A2F14;
extern int D_001A2EF4;

int func_022728(void)
{
    if (D_001A2F14 == 0) {
        if (D_001A2EF4 == 0)
            return 0;
    }
    return 1;
}
