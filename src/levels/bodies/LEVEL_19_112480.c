extern void func_1124E0(char *);

void func_112480(char *record)
{
    *(int *)(record + 8) = -1;
    *(int *)(record + 0xc) = 3;
    record[0x10] = 1;
    func_1124E0(record);
}
