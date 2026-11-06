/* LEVEL_01.REL:0x1B5480: Ghidra body 68 bytes.
 * Pinned pure C links 60 bytes and first differs at +4.
 * Recheck nested field access and predicate before the call. No matching credit.
 */
extern int func_1B5430(long long);

int func_1B5480(long long value, char *record)
{
    int active = 0;
    char *nested = *(char **)(record + 0x40);
    char *entry = *(char **)(nested + 0x10);
    if ((*(unsigned int *)(entry + 0x3c) & 4) != 0) {
        active = func_1B5430(value) == 0;
    }
    return active;
}
