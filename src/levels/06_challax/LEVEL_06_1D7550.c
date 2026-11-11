extern void func_090188(char *, long long, int);

void func_1D7550(char *record, long long other, int value)
{
    func_090188(record, other, 1);
    *(int *)(record + 0x14) = value;
}
