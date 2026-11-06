extern void func_1964E0(void *);

void func_195E18(char *record, int enabled)
{
    if (enabled != 0) {
        *(int *)(record + 0x70) = 0;
        record[0x45] = 1;
    } else {
        record[0x45] = 0;
        func_1964E0(record);
        *(int *)(record + 0x70) = 0;
    }
}
