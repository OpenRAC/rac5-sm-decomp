/* LEVEL_01.REL:0x024B08: Ghidra body 148 bytes.
 * Pinned pure C links 148 bytes and first differs at +58.
 * Recheck indexed field address order and the result lifetime. No matching credit.
 */
extern int *func_024628(long long, long long);
extern int func_024A38(long long);

int func_024B08(long long first, long long second, int index, long long fourth)
{
    int matches = 0;
    int *fields = func_024628(first, fourth);
    if (*(int *)((char *)fields + 0x30 + index * 4) != 0) {
        fields = func_024628(first, fourth);
        matches = *(int *)((char *)fields + 0x30 + index * 4) == func_024A38(second);
    }
    return matches;
}
