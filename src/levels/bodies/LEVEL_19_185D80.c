extern void func_070160(long long, void *, int);

void func_185D80(char *record, long long value)
{
    func_070160(value, record + 0x3c, *(int *)(record + 0x60));
    func_070160(value, record + 0x48, *(int *)(record + 100));
}
