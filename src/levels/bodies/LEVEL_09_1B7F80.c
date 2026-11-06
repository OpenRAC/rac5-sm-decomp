extern void func_079B18(long long, void *, int);

void func_1B7F80(char *record, long long value)
{
    func_079B18(value, record + 0x3c, *(int *)(record + 0x60));
    func_079B18(value, record + 0x48, *(int *)(record + 100));
}
