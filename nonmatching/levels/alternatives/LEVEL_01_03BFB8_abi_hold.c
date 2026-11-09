/* LEVEL_01.REL:0x03BFB8: reviewed 128-byte candidate, held for ABI review.
 * Sets or clears bit 0x20 on six slot records, then updates a 64-bit flag and
 * calls the refresher.
 * pinned C with gnu-ee-trial links 128/128 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_19D9E0(char *record);

void func_03BFB8(char *state, unsigned int enabled)
{
    unsigned int index = 0;
    int mask = ~0x20;
    unsigned int bit = ((enabled ^ 1) & 1) << 5;
    char **slot;
    char *entry;
    slot = (char **)(state + 0x5b8);
    do {
        entry = *slot;
        index++;
        if (entry != 0) {
            int flags = *(int *)(entry + 0x64);
            *(int *)(entry + 0x64) = (flags & mask) | bit;
        }
        slot++;
    } while (index < 6);
    *(unsigned long long *)(state + 0x968) =
        (*(unsigned long long *)(state + 0x968) & ~0x80ULL) |
        ((unsigned long long)(enabled & 1) << 7);
    func_19D9E0(state);
}
