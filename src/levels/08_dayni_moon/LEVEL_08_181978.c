/* LEVEL_08:0x181978 -- placement copy of LEVEL_02_180558.c: calls a helper with a child's field; when it succeeds, marks the record and returns 1. */
extern int func_08C780(int);

int func_181978(char *record, void *v)
{
    int value = func_08C780(*(int *)(*(char **)(record + 0x54) + 8));

    if (value != 0) {
        record[0x45] = 2;
        return 1;
    }
    return 0;
}
