extern void func_110AF0(char *);

void func_110A90(char *record)
{
    *(int *)(record + 8) = -1;
    *(int *)(record + 0xc) = 3;
    record[0x10] = 1;
    func_110AF0(record);
}
