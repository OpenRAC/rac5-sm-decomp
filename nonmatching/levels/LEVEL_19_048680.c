/* LEVEL_19.REL:0x048680, bounded 44-byte body.
 * Pinned C links 40 bytes against the 44-byte retail body;
 * first difference at byte +5 is a missing register copy.
 * Reopen: recover the original value lifetime or a qualified
 * compiler route that preserves both input copies. Several
 * source types/forms and five other cc1 routes did not.
 */
extern void func_06FE08(int);

int func_048680(char *record, int value)
{
    *(int *)(record + 0x36c) = value;
    func_06FE08(*(int *)(record + 0x59c));
    return 1;
}
