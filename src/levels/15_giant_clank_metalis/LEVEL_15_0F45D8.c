extern void func_0F4638(char *);

void func_0F45D8(char *record)
{
    *(int *)(record + 8) = -1;
    *(int *)(record + 0xc) = 3;
    record[0x10] = 1;
    func_0F4638(record);
}
