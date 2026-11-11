/* LEVEL_02:0x0245C8 -- placement copy of LEVEL_01_023C68.c: compares two record fields and calls a helper with the chosen field. */
extern void func_0244F0(char *, int);

void func_0245C8(char *record)
{
    int first = *(int *)(record + 0x9a8);
    if (*(int *)(record + 0x9a0) != first) {
        func_0244F0(record, first);
        return;
    }
    func_0244F0(record, *(int *)(record + 0x9ac));
}
