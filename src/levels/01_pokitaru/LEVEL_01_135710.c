extern void func_135770(char *);

void func_135710(char *record)
{
    *(int *)(record + 8) = -1;
    *(int *)(record + 0xc) = 3;
    record[0x10] = 1;
    func_135770(record);
}
