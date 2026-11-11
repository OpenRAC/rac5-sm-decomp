extern void func_08F070(long long, void *);

void func_028868(char *record, long long value)
{
    func_08F070(value, record + 0xf0);
    func_08F070(value, record + 0x134);
    func_08F070(value, record + 0x178);
}
