extern void func_1310E8(char *);

void func_131088(char *record)
{
    *(int *)(record + 8) = -1;
    *(int *)(record + 0xc) = 3;
    record[0x10] = 1;
    func_1310E8(record);
}
