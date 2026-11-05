/* LEVEL_20.REL:0x01FD88, bounded 44-byte body.
 * Pinned C links 44 bytes but first differs at body byte +8:
 * the first branch span and second global-address setup use a
 * different schedule from the retail two-global zero test.
 * Reopen: recover a source flow or qualified compiler route
 * that preserves the retail second load and return blocks.
 * Nested/typed forms, five cc1 routes and scoped flags did not.
 */
extern int D_00104174;
extern int D_00104154;

int func_01FD88(void)
{
    if (D_00104174 == 0) {
        if (D_00104154 == 0)
            return 0;
    }
    return 1;
}
