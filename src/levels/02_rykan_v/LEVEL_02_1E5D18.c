extern void func_083968(long long, void *, int);

void func_1E5D18(char *record, long long value)
{
    func_083968(value, record + 0x3c, *(int *)(record + 0x60));
    func_083968(value, record + 0x48, *(int *)(record + 100));
}
