/* LEVEL_05:0x15FA68 -- placement copy of LEVEL_02_180558.c: calls a helper with a child's field; when it succeeds, marks the record and returns 1. */
extern int func_082088(int);

int func_15FA68(char *record)
{
    int value = func_082088(*(int *)(*(char **)(record + 0x54) + 8));

    if (value != 0) {
        record[0x45] = 2;
        return 1;
    }
    return 0;
}
