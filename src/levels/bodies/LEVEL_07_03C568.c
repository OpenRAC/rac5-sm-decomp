/* LEVEL_07:0x03C568 -- placement copy of LEVEL_01_03BFB8.c: sets or clears bit 0x20 on six slot records, then updates a 64-bit flag and calls the refresher. */
extern void func_1AFB88(char *record);

void func_03C568(char *state, unsigned int enabled)
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
    func_1AFB88(state);
}
