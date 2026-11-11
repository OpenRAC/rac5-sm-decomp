extern void func_07CE78(long long, void *, int);

void func_1E1818(char *record, long long value)
{
    func_07CE78(value, record + 0x3c, *(int *)(record + 0x60));
    func_07CE78(value, record + 0x48, *(int *)(record + 100));
}
