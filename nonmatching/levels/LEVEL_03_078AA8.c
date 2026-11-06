/* LEVEL_03.REL:0x078AA8, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +47.
 * The four-entry pointer scan differs near its return path. Reopen with array bounds and return-pointer type.
 */
extern int D_002284C8[];

int * func_078AA8(char *record)
{
    int index;
    for (index = 0; index < 4; index++) {
        int *entry = D_002284C8 + index * 2;
        if (*(int *)(*(char **)(record + 0x40) + 0x24) == *entry)
            return entry;
    }
    return 0;
}
