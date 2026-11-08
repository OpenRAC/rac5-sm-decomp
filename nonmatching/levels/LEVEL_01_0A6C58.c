/* LEVEL_01.REL:0x0A6C58: reviewed 144-byte candidate.
 * pinned C with gnu-ee-trial links 140 bytes; first differs at +8.
 * Retry: Recover saved-register order and early branch schedule while retaining the
 * observed table-base return when the selected entry is null.
 * No matching credit.
 */
typedef unsigned int u32;
extern int func_0A69A0(int);
extern char D_001F7060[];

u32 func_0A6C58(int index, int slot, int channel)
{
    char *base;
    char *entry;
    if (!func_0A69A0(slot))
        return 0;
    base = D_001F7060;
    entry = *(char **)(base + slot * 12 + channel * 4);
    if (entry == 0)
        return (u32)base;
    if (index < 0 || index >= 3)
        return 0;
    return *(u32 *)(entry + 4) + index;
}
