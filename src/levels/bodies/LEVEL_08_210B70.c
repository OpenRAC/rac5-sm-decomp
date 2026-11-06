extern void func_085008(long long, void *, int);

void func_210B70(char *record, long long value)
{
    func_085008(value, record + 0x3c, *(int *)(record + 0x60));
    func_085008(value, record + 0x48, *(int *)(record + 100));
}
