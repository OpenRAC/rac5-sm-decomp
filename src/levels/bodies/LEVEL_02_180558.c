/* LEVEL_02:0x180558 -- calls a helper with a child's field; when it succeeds, marks the record and returns 1. */
extern int func_08B060(int);

int func_180558(char *record)
{
    int value = func_08B060(*(int *)(*(char **)(record + 0x54) + 8));

    if (value != 0) {
        record[0x45] = 2;
        return 1;
    }
    return 0;
}
