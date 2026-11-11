extern void func_07A738(long long, void *, int);

void func_1BFD10(char *record, long long value)
{
    func_07A738(value, record + 0x3c, *(int *)(record + 0x60));
    func_07A738(value, record + 0x48, *(int *)(record + 100));
}
