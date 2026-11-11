extern void func_07D6C8(long long, void *, int);

void func_1D5428(char *record, long long value)
{
    func_07D6C8(value, record + 0x3c, *(int *)(record + 0x60));
    func_07D6C8(value, record + 0x48, *(int *)(record + 100));
}
