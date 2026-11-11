extern void func_1F0A38(void *);

void func_1F0370(char *record, int enabled)
{
    if (enabled != 0) {
        *(int *)(record + 0x70) = 0;
        record[0x45] = 1;
    } else {
        record[0x45] = 0;
        func_1F0A38(record);
        *(int *)(record + 0x70) = 0;
    }
}
