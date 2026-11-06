/* LEVEL_21.REL:0x13BA10, bounded 56-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +4.
 * The pinned compiler links 64 bytes and allocates different call and multiply registers. Reopen with the five-argument callee prototype and float-field type.
 */
extern void func_13B918(int, int, long long, int *, int);

void func_13BA10(long long first, int *slot)
{
    char *record = (char *)*slot;
    int index = *(int *)(record + 0xc0);
    func_13B918(*(int *)(record + index * 0x28 + 100),
              *(int *)(record + 0xd0), first, slot,
              *(int *)(record + 0xcc));
}
