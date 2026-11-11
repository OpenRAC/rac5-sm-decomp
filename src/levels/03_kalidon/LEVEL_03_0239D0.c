/* LEVEL_03:0x0239D0 -- placement copy of LEVEL_01_023C68.c: compares two record fields and calls a helper with the chosen field. */
extern void func_0238F8(char *, int);

void func_0239D0(char *record)
{
    int first = *(int *)(record + 0x9a8);
    if (*(int *)(record + 0x9a0) != first) {
        func_0238F8(record, first);
        return;
    }
    func_0238F8(record, *(int *)(record + 0x9ac));
}
