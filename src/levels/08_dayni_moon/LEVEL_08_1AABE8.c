extern void func_09F4F0(char *, long long, int);

void func_1AABE8(char *record, int other, int value)
{
    func_09F4F0(record, other, 0);
    *(int *)(record + 0x20) = value;
}
