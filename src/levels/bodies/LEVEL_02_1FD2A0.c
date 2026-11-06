extern void func_09DB78(char *, long long, int);

void func_1FD2A0(char *record, long long other, int value)
{
    func_09DB78(record, other, 1);
    *(int *)(record + 0x14) = value;
}
