extern void func_09F4F0(char *, long long, int);

void func_22F5A8(char *record, long long other, int value)
{
    func_09F4F0(record, other, 1);
    *(int *)(record + 0x14) = value;
}
