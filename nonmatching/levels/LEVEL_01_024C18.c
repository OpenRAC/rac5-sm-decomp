/* LEVEL_01.REL:0x024C18: Ghidra body 128 bytes.
 * Pinned pure C links 124 bytes and first differs at +48.
 * Recheck record lookup and loop result lifetime. No matching credit.
 */
extern char *func_024628(long long, long long);
extern int func_024A38(unsigned int);

unsigned int func_024C18(long long value, int slot)
{
    unsigned int index = 0;
    do {
        char *record = func_024628(value, -1LL);
        int expected = func_024A38(index);
        if (*(int *)(record + 0x30 + slot * 4) == expected) {
            return index;
        }
        index++;
    } while (index < 43);
    return 0;
}
