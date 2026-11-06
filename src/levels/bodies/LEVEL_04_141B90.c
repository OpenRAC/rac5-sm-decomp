extern void func_141BF0(char *);

void func_141B90(char *record)
{
    *(int *)(record + 8) = -1;
    *(int *)(record + 0xc) = 3;
    record[0x10] = 1;
    func_141BF0(record);
}
