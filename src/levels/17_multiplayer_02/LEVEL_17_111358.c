extern void func_1113B8(char *);

void func_111358(char *record)
{
    *(int *)(record + 8) = -1;
    *(int *)(record + 0xc) = 3;
    record[0x10] = 1;
    func_1113B8(record);
}
