/* LEVEL:0x1BEDD0 -- forwards a request when the value matches a stored field and the record state is 6. */
extern void func_1BDD40(unsigned char *, int);

int func_1BEDD0(unsigned char *record, int value)
{
    if (value == *(int *)(*(char **)(record + 0x58) + 0x5c) &&
        record[0x45] == 6) {
        func_1BDD40(record, 7);
        return 1;
    }
    return 0;
}
