/* LEVEL_05.REL:0x1AE2D0, bounded 36-byte body.
 * Isolated pinned C links 36 bytes; first difference at body byte +2:
 * the global-pointer and result temporaries use different registers.
 * Reopen: recover source-level lifetimes or qualify a compiler route
 * that selects the retail registers. Nested conditional, ternary,
 * pointer-return forms and five qualified cc1 routes did not.
 */
extern unsigned char *D_001F7E4C;

int func_1AE2D0(void)
{
    unsigned char *p = D_001F7E4C;
    int result = 0;
    if (p != 0)
    {
        unsigned int different = p[0x45] ^ 12u;
        if (different != 0)
            result = (int)p;
    }
    return result;
}
