/* LEVEL_24:0x0219E0 -- placement copy of LEVEL_01_023C68.c: compares two record fields and calls a helper with the chosen field. */
extern void func_021908(char *, int);

void func_0219E0(char *record)
{
    int first = *(int *)(record + 0x9a8);
    if (*(int *)(record + 0x9a0) != first) {
        func_021908(record, first);
        return;
    }
    func_021908(record, *(int *)(record + 0x9ac));
}
