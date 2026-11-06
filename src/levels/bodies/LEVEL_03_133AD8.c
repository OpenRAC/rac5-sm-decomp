extern void func_133B38(char *);

void func_133AD8(char *record)
{
    *(int *)(record + 8) = -1;
    *(int *)(record + 0xc) = 3;
    record[0x10] = 1;
    func_133B38(record);
}
