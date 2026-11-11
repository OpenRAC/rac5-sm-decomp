extern void func_08CE30(char *, long long, int);

void func_1B66C0(char *record, long long other, int value)
{
    func_08CE30(record, other, 1);
    *(int *)(record + 0x14) = value;
}
