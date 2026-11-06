/* LEVEL_01.REL:0x074380: Ghidra body 68 bytes.
 * Pinned pure C links 64 bytes and first differs at +8.
 * Recheck lookup result lifetime and conditional destination store. No matching credit.
 */
extern char *func_074D60(void);

void func_074380(char *record, int value)
{
    char *entry = func_074D60();
    if (entry == 0) {
        *(int *)(*(char **)(record + 0x48) + 0xdc) = value;
    } else {
        *(int *)(entry + 4) = value;
    }
}
