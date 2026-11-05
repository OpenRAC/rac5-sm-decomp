/* LEVEL_01.REL:0x0B9800, bounded 64-byte candidate. The same raw body is
 * present at 20 numbered level placements with no body relocations.
 * Pinned C links to 64 bytes but first differs at body byte +24: the index
 * shift and record-stride multiply are scheduled in the opposite order, with
 * different temporary registers. Reopen after recovering a natural source
 * expression and data layout that gives the retail lifetime order.
 * Not linked into the accepted gate or counted.
 */struct EntrySet { unsigned char **items; unsigned int count; };
int func_0B9800(struct EntrySet *set, unsigned int index, int slot, int value)
{
    if (index >= set->count)
        return 0;
    set->items[index][slot * 0x30 + 0x24] = value;
    return 1;
}
