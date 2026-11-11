/* LEVEL_09:0x022DF8 -- placement copy of LEVEL_01_023C68.c: compares two record fields and calls a helper with the chosen field. */
extern void func_022D20(char *, int);

void func_022DF8(char *record)
{
    int first = *(int *)(record + 0x9a8);
    if (*(int *)(record + 0x9a0) != first) {
        func_022D20(record, first);
        return;
    }
    func_022D20(record, *(int *)(record + 0x9ac));
}
