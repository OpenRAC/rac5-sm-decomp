extern void func_077778(long long, void *, int);

void func_1A1580(char *record, long long value)
{
    func_077778(value, record + 0x3c, *(int *)(record + 0x60));
    func_077778(value, record + 0x48, *(int *)(record + 100));
}
