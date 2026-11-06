/* LEVEL_01.REL:0x074128: Ghidra body 96 bytes.
 * Pinned pure C links 88 bytes and first differs at +28.
 * Recheck nested state guard and lookup result lifetime. No matching credit.
 */
extern char *func_074D60(void *);

int func_074128(char *record)
{
    char *first = *(char **)(record + 0x40);
    char *second = *(char **)(first + 0x10);
    if ((*(unsigned int *)(second + 0x3c) & 0x2002) == 0 &&
        *(int *)(record + 0x48) != 0 &&
        (*(unsigned int *)(record + 100) & 0x4000) == 0) {
        return func_074D60(record) == 0;
    }
    return 0;
}
