/* LEVEL_22:0x01EBA8 -- placement copy of LEVEL_01_023C68.c: compares two record fields and calls a helper with the chosen field. */
extern void func_01EAD0(char *, int);

void func_01EBA8(char *record)
{
    int first = *(int *)(record + 0x9a8);
    if (*(int *)(record + 0x9a0) != first) {
        func_01EAD0(record, first);
        return;
    }
    func_01EAD0(record, *(int *)(record + 0x9ac));
}
