extern void func_13BB20(char *);

void func_13BAC0(char *record)
{
    *(int *)(record + 8) = -1;
    *(int *)(record + 0xc) = 3;
    record[0x10] = 1;
    func_13BB20(record);
}
