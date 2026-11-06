extern void func_08BDA0(long long, void *);

void func_028DC0(char *record, long long value)
{
    func_08BDA0(value, record + 0xf0);
    func_08BDA0(value, record + 0x134);
    func_08BDA0(value, record + 0x178);
}
