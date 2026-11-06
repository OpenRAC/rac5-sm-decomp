/* LEVEL_01.REL:0x024670: Ghidra body 96 bytes.
 * Pinned pure C links 80 bytes and first differs at +1.
 * Recheck 0x58-byte record pointer indexing and range guard. No matching credit.
 */
typedef struct {
    char earlier[0x10];
    void *slots[18];
} Entry;

extern Entry D_001F35D8[];

void *func_024670(unsigned int first, int index)
{
    Entry *entry;
    int slot;
    index++;
    if (first >= 25 || index < 0 || index >= 2) {
        return 0;
    }
    entry = &D_001F35D8[first + index];
    slot = *(int *)((char *)entry + 0x3c);
    return entry->slots[slot];
}
