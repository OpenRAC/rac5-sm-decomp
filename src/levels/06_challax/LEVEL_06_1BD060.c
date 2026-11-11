extern void func_076C78(long long, void *, int);

void func_1BD060(char *record, long long value)
{
    func_076C78(value, record + 0x3c, *(int *)(record + 0x60));
    func_076C78(value, record + 0x48, *(int *)(record + 100));
}
