extern void func_12DCA0(void *, void *, int, void *);

void func_1CE0B8(char *record, void *value)
{
    char *nested = *(char **)(record + 0x58);
    record[0x45] = 1;
    func_12DCA0(nested, record, *(int *)(nested + 0xcc), value);
}
