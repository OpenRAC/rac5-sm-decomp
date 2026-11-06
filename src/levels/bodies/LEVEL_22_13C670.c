extern void func_06FA70(long long, void *, int);

void func_13C670(char *record, long long value)
{
    func_06FA70(value, record + 0x3c, *(int *)(record + 0x60));
    func_06FA70(value, record + 0x48, *(int *)(record + 100));
}
