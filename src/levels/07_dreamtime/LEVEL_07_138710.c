extern void func_138770(char *);

void func_138710(char *record)
{
    *(int *)(record + 8) = -1;
    *(int *)(record + 0xc) = 3;
    record[0x10] = 1;
    func_138770(record);
}
