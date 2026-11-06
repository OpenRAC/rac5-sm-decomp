extern void func_12BE40(char *);

void func_12BDE0(char *record)
{
    *(int *)(record + 8) = -1;
    *(int *)(record + 0xc) = 3;
    record[0x10] = 1;
    func_12BE40(record);
}
