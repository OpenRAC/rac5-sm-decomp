extern void func_0903D0(char *, long long, int);

void func_1B92E0(char *record, long long other, int value)
{
    func_0903D0(record, other, 1);
    *(int *)(record + 0x14) = value;
}
