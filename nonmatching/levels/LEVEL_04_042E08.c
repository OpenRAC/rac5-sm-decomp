/* LEVEL_04.REL:0x042E08, bounded 44-byte body.
 * Pinned C links 44 bytes but first differs at byte +6:
 * the constant and field load use opposite registers.
 * Reopen: recover the original comparison source/type or
 * qualify a compiler route restoring register allocation.
 * Natural comparison forms and five other cc1 routes did not.
 */
extern void func_06CA30(void);

void func_042E08(char *record)
{
    if (1 != *(int *)(record + 0x9a0))
        func_06CA30();
}
