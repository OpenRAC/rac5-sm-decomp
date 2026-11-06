extern void func_09DB78(char *, long long, int);

void func_19E300(char *record, long long other, int value)
{
    func_09DB78(record, other, 0);
    *(int *)(record + 0x20) = value;
}
