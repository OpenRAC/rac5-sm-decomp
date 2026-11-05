/* LEVEL_01.REL:0x025580, bounded 44-byte body.
 * Pinned C links 44 bytes but first differs at body byte +8:
 * the first branch span and second global-address setup use a
 * different schedule from the retail two-global zero test.
 * Reopen: recover a source flow or qualified compiler route
 * that preserves the retail second load and return blocks.
 * Nested/typed forms, five cc1 routes and scoped flags did not.
 */
extern int D_001F3F8C;
extern int D_001F3F6C;

int func_025580(void)
{
    if (D_001F3F8C == 0) {
        if (D_001F3F6C == 0)
            return 0;
    }
    return 1;
}
