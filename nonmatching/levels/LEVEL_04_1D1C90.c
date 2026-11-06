/* LEVEL_04.REL:0x1D1C90, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +27.
 * The record comparison and return-state branch differ. Reopen with caller evidence for field signedness and return type.
 */
extern void func_1D0C00(char *, int);

int func_1D1C90(char *record, int value)
{
    if (value == *(int *)(*(char **)(record + 0x58) + 0x5c) &&
        record[0x45] == 6) {
        func_1D0C00(record, 7);
        return 1;
    }
    return 0;
}
