extern void func_10CC40(char *);

void func_10CBE0(char *record)
{
    *(int *)(record + 8) = -1;
    *(int *)(record + 0xc) = 3;
    record[0x10] = 1;
    func_10CC40(record);
}
