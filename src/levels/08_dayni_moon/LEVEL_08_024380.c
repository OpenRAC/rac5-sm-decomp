/* LEVEL_08:0x024380 -- placement copy of LEVEL_01_023C68.c: compares two record fields and calls a helper with the chosen field. */
extern void func_0242A8(char *, int);

void func_024380(char *record)
{
    int first = *(int *)(record + 0x9a8);
    if (*(int *)(record + 0x9a0) != first) {
        func_0242A8(record, first);
        return;
    }
    func_0242A8(record, *(int *)(record + 0x9ac));
}
