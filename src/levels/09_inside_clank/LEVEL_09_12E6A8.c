extern void func_12E708(char *);

void func_12E6A8(char *record)
{
    *(int *)(record + 8) = -1;
    *(int *)(record + 0xc) = 3;
    record[0x10] = 1;
    func_12E708(record);
}
