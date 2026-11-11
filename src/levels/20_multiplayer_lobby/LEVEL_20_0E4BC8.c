extern void func_0E4C28(char *);

void func_0E4BC8(char *record)
{
    *(int *)(record + 8) = -1;
    *(int *)(record + 0xc) = 3;
    record[0x10] = 1;
    func_0E4C28(record);
}
