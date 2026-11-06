/* LEVEL_01.REL:0x025258: Ghidra body 128 bytes.
 * Pinned pure C links 128 bytes and first differs at +40.
 * Recheck selector argument width and optional refresh call. No matching credit.
 */
extern char *func_024628(unsigned int, long long);
extern void func_025098(unsigned int, long long);

int func_025258(unsigned int index, unsigned int slot,
                long long value, int refresh)
{
    char *record;
    if (index >= 25 || slot >= 8) {
        return 0;
    }
    record = func_024628(index, value);
    *(int *)(record + 0x3c) = slot;
    if (refresh != 0) {
        func_025098(index, value);
    }
    return 1;
}
