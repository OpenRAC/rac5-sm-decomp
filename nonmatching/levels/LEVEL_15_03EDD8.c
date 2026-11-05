/* LEVEL_15.REL:0x03EDD8, bounded 44-byte body.
 * Pinned C links 40 bytes against the 44-byte retail body;
 * first difference at byte +5 is a missing register copy.
 * Reopen: recover the original value lifetime or a qualified
 * compiler route that preserves both input copies. Several
 * source types/forms and five other cc1 routes did not.
 */
extern void func_061910(int);

int func_03EDD8(char *record, int value)
{
    *(int *)(record + 0x36c) = value;
    func_061910(*(int *)(record + 0x59c));
    return 1;
}
