/* LEVEL_07:0x0240C8 -- placement copy of LEVEL_01_023C68.c: compares two record fields and calls a helper with the chosen field. */
extern void func_023FF0(char *, int);

void func_0240C8(char *record)
{
    int first = *(int *)(record + 0x9a8);
    if (*(int *)(record + 0x9a0) != first) {
        func_023FF0(record, first);
        return;
    }
    func_023FF0(record, *(int *)(record + 0x9ac));
}
