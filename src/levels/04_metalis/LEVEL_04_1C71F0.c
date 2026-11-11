extern void func_1C78B8(void *);

void func_1C71F0(char *record, int enabled)
{
    if (enabled != 0) {
        *(int *)(record + 0x70) = 0;
        record[0x45] = 1;
    } else {
        record[0x45] = 0;
        func_1C78B8(record);
        *(int *)(record + 0x70) = 0;
    }
}
