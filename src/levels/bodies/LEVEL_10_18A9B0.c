extern void func_097940(char *, long long, int);

void func_18A9B0(char *record, long long other, int value)
{
    func_097940(record, other, 0);
    *(int *)(record + 0x20) = value;
}
