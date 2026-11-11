extern void func_093D28(char *, long long, int);

void func_1D2470(char *record, long long other, int value)
{
    func_093D28(record, other, 1);
    *(int *)(record + 0x14) = value;
}
