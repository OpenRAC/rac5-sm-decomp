/* LEVEL_01:0x023C68 -- compares two record fields and calls a helper with the chosen field. */
extern void func_023B90(char *, int);

void func_023C68(char *record)
{
    int first = *(int *)(record + 0x9a8);
    if (*(int *)(record + 0x9a0) != first) {
        func_023B90(record, first);
        return;
    }
    func_023B90(record, *(int *)(record + 0x9ac));
}
