/* LEVEL_10:0x023468 -- placement copy of LEVEL_01_023C68.c: compares two record fields and calls a helper with the chosen field. */
extern void func_023390(char *, int);

void func_023468(char *record)
{
    int first = *(int *)(record + 0x9a8);
    if (*(int *)(record + 0x9a0) != first) {
        func_023390(record, first);
        return;
    }
    func_023390(record, *(int *)(record + 0x9ac));
}
