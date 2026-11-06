/* LEVEL_01.REL:0x0753B8: Ghidra body 68 bytes.
 * Pinned pure C links 64 bytes and first differs at +8.
 * Recheck lookup result lifetime and conditional destination store. No matching credit.
 */
extern char *func_0751B0(void);

void func_0753B8(char *record, int value)
{
    char *entry = func_0751B0();
    if (entry == 0) {
        *(int *)(*(char **)(record + 0x48) + 0xdc) = value;
    } else {
        *(int *)(entry + 0x0c) = value;
    }
}
