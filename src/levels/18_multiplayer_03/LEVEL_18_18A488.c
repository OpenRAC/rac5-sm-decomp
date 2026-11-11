extern void func_06F6C8(long long, void *, int);

void func_18A488(char *record, long long value)
{
    func_06F6C8(value, record + 0x3c, *(int *)(record + 0x60));
    func_06F6C8(value, record + 0x48, *(int *)(record + 100));
}
