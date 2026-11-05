/* LEVEL_02.REL:0x1D2090, bounded 36-byte body.
 * Isolated pinned C links 36 bytes; first difference at body byte +2:
 * the global-pointer and result temporaries use different registers.
 * Reopen: recover source-level lifetimes or qualify a compiler route
 * that selects the retail registers. Nested conditional, ternary,
 * pointer-return forms and five qualified cc1 routes did not.
 */
extern unsigned char *D_0021DE0C;

int func_1D2090(void)
{
    unsigned char *p = D_0021DE0C;
    int result = 0;
    if (p != 0)
    {
        unsigned int different = p[0x45] ^ 12u;
        if (different != 0)
            result = (int)p;
    }
    return result;
}
