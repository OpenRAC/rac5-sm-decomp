extern void func_126EE8(char *);

void func_126E88(char *record)
{
    *(int *)(record + 8) = -1;
    *(int *)(record + 0xc) = 3;
    record[0x10] = 1;
    func_126EE8(record);
}
