extern void func_090188(char *, long long, int);

void func_17B598(char *record, int other, int value)
{
    func_090188(record, other, 0);
    *(int *)(record + 0x20) = value;
}
