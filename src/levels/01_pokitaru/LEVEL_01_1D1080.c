extern void func_07D098(long long, void *, int);

void func_1D1080(char *record, long long value)
{
    func_07D098(value, record + 0x3c, *(int *)(record + 0x60));
    func_07D098(value, record + 0x48, *(int *)(record + 100));
}
