/* USA LEVEL_04.REL:0x16DD38, 92-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 92 linked bytes; first differing word +0x0.
 * Unaccepted; no matching credit. Recover pool and entry pointer live ranges; the corrected flag gates state 3 only, while state 1 is independently eligible.
 */
/* Find the first active entry in the global pool with either eligible state. */
typedef struct Entry { unsigned char pad[0x45]; unsigned char state; unsigned char pad2[0x1e]; unsigned int flags; unsigned char pad3[0x18]; } Entry;
typedef struct Pool { unsigned char pad[12]; Entry *entries; unsigned char pad2[32]; unsigned int count; } Pool;
extern Pool *D_00220D8C;
Entry *func_16DD38(void)
{
    Entry *entry = D_00220D8C->entries;
    Entry *end = entry + D_00220D8C->count;
    for (; entry != end; ++entry)
        if (((entry->flags & 1) && entry->state == 3) || entry->state == 1) return entry;
    return 0;
}
