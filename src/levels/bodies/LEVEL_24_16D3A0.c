extern void func_0903D0(char *, long long, int);

void func_16D3A0(char *record, long long other, int value)
{
    func_0903D0(record, other, 0);
    *(int *)(record + 0x20) = value;
}
