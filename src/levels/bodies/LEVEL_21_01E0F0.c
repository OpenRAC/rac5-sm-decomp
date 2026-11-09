/* LEVEL_21:0x01E0F0 -- placement copy of LEVEL_01_023C68.c: compares two record fields and calls a helper with the chosen field. */
extern void func_01E018(char *, int);

void func_01E0F0(char *record)
{
    int first = *(int *)(record + 0x9a8);
    if (*(int *)(record + 0x9a0) != first) {
        func_01E018(record, first);
        return;
    }
    func_01E018(record, *(int *)(record + 0x9ac));
}
