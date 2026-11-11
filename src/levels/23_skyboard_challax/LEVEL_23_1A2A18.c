extern void func_074498(long long, void *, int);

void func_1A2A18(char *record, long long value)
{
    func_074498(value, record + 0x3c, *(int *)(record + 0x60));
    func_074498(value, record + 0x48, *(int *)(record + 100));
}
