/* LEVEL_05:0x022C00 -- placement copy of LEVEL_01_023C68.c: compares two record fields and calls a helper with the chosen field. */
extern void func_022B28(char *, int);

void func_022C00(char *record)
{
    int first = *(int *)(record + 0x9a8);
    if (*(int *)(record + 0x9a0) != first) {
        func_022B28(record, first);
        return;
    }
    func_022B28(record, *(int *)(record + 0x9ac));
}
