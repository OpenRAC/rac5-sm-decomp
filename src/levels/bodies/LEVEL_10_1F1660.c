extern void func_097940(char *, long long, int);

void func_1F1660(char *record, long long other, int value)
{
    func_097940(record, other, 1);
    *(int *)(record + 0x14) = value;
}
