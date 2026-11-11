extern void func_12B270(char *);

void func_12B210(char *record)
{
    *(int *)(record + 8) = -1;
    *(int *)(record + 0xc) = 3;
    record[0x10] = 1;
    func_12B270(record);
}
