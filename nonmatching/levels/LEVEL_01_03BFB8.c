/* LEVEL_01.REL:0x03BFB8: reviewed 128-byte candidate.
 * pinned C with gnu-ee-trial links 128 bytes; first differs at +38.
 * Retry: Recover a loop source shape that keeps the first record load inside the
 * aligned loop rather than in the preheader; current C links 128/128 and first
 * differs at +38.
 * No matching credit.
 */
extern void func_19D9E0(char *record);

void func_03BFB8(char *state, unsigned int enabled)
{
    unsigned int index = 0;
    unsigned int bit = ((enabled ^ 1) & 1) << 5;
    while (index < 6) {
        char *entry = *(char **)(state + 0x5b8 + index * 4);
        index++;
        if (entry != 0) {
            int flags = *(int *)(entry + 0x64);
            *(int *)(entry + 0x64) = (flags & ~0x20) | bit;
        }
    }
    *(unsigned long long *)(state + 0x968) =
        (*(unsigned long long *)(state + 0x968) & ~0x80ULL) |
        ((unsigned long long)(enabled & 1) << 7);
    func_19D9E0(state);
}
