/* LEVEL_06:0x022208 -- placement copy of LEVEL_01_023C68.c: compares two record fields and calls a helper with the chosen field. */
extern void func_022130(char *, int);

void func_022208(char *record)
{
    int first = *(int *)(record + 0x9a8);
    if (*(int *)(record + 0x9a0) != first) {
        func_022130(record, first);
        return;
    }
    func_022130(record, *(int *)(record + 0x9ac));
}
