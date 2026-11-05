/* LEVEL_16.REL:0x0230E0, bounded 44-byte body.
 * Pinned C links 44 bytes but first differs at body byte +8:
 * the first branch span and second global-address setup use a
 * different schedule from the retail two-global zero test.
 * Reopen: recover a source flow or qualified compiler route
 * that preserves the retail second load and return blocks.
 * Nested/typed forms, five cc1 routes and scoped flags did not.
 */
extern int D_001A1A94;
extern int D_001A1A74;

int func_0230E0(void)
{
    if (D_001A1A94 == 0) {
        if (D_001A1A74 == 0)
            return 0;
    }
    return 1;
}
