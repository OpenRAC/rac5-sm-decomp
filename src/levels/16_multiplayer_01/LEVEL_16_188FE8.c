extern void func_070018(long long, void *, int);

void func_188FE8(char *record, long long value)
{
    func_070018(value, record + 0x3c, *(int *)(record + 0x60));
    func_070018(value, record + 0x48, *(int *)(record + 100));
}
