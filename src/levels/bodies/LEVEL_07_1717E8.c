/* LEVEL_07:0x1717E8 -- placement copy of LEVEL_02_180558.c: calls a helper with a child's field; when it succeeds, marks the record and returns 1. */
extern int func_086800(int);

int func_1717E8(char *record, void *v)
{
    int value = func_086800(*(int *)(*(char **)(record + 0x54) + 8));

    if (value != 0) {
        record[0x45] = 2;
        return 1;
    }
    return 0;
}
