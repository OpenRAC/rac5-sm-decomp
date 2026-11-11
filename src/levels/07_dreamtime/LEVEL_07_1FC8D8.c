extern void func_099458(char *, long long, int);

void func_1FC8D8(char *record, long long other, int value)
{
    func_099458(record, other, 1);
    *(int *)(record + 0x14) = value;
}
