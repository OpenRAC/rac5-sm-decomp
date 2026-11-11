/* LEVEL_23:0x021E10 -- placement copy of LEVEL_01_023C68.c: compares two record fields and calls a helper with the chosen field. */
extern void func_021D38(char *, int);

void func_021E10(char *record)
{
    int first = *(int *)(record + 0x9a8);
    if (*(int *)(record + 0x9a0) != first) {
        func_021D38(record, first);
        return;
    }
    func_021D38(record, *(int *)(record + 0x9ac));
}
