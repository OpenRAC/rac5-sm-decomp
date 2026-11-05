/* LEVEL_04.REL:0x04F430, bounded 44-byte body.
 * Pinned C links 40 bytes against the 44-byte retail body;
 * first difference at byte +5 is a missing register copy.
 * Reopen: recover the original value lifetime or a qualified
 * compiler route that preserves both input copies. Several
 * source types/forms and five other cc1 routes did not.
 */
extern void func_080188(int);

int func_04F430(char *record, int value)
{
    *(int *)(record + 0x36c) = value;
    func_080188(*(int *)(record + 0x59c));
    return 1;
}
