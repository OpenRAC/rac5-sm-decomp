/* LEVEL_24.REL:0x0469F8, bounded 44-byte body.
 * Pinned C links 40 bytes against the 44-byte retail body;
 * first difference at byte +5 is a missing register copy.
 * Reopen: recover the original value lifetime or a qualified
 * compiler route that preserves both input copies. Several
 * source types/forms and five other cc1 routes did not.
 */
extern void func_077408(int);

int func_0469F8(char *record, int value)
{
    *(int *)(record + 0x36c) = value;
    func_077408(*(int *)(record + 0x59c));
    return 1;
}
