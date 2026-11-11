extern void func_070748(long long, void *, int);

void func_17C630(char *record, long long value)
{
    func_070748(value, record + 0x3c, *(int *)(record + 0x60));
    func_070748(value, record + 0x48, *(int *)(record + 100));
}
