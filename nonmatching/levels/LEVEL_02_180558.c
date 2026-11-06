/* LEVEL_02.REL:0x180558: Ghidra body 68 bytes.
 * Pinned pure C links 64 bytes and first differs at +28.
 * Recheck the call return width and following byte-store branch. No matching credit.
 */
extern int func_08B060(int);

int func_180558(char *record)
{
    int value = func_08B060(*(int *)(*(char **)(record + 0x54) + 8));
    if (value != 0) {
        record[0x45] = 2;
    }
    return value != 0;
}
