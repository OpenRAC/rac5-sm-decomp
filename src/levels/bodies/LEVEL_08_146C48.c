extern void func_146CA8(char *);

void func_146C48(char *record)
{
    *(int *)(record + 8) = -1;
    *(int *)(record + 0xc) = 3;
    record[0x10] = 1;
    func_146CA8(record);
}
