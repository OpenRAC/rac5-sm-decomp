extern void func_07F200(long long, void *, int);

void func_1DDFD0(char *record, long long value)
{
    func_07F200(value, record + 0x3c, *(int *)(record + 0x60));
    func_07F200(value, record + 0x48, *(int *)(record + 100));
}
