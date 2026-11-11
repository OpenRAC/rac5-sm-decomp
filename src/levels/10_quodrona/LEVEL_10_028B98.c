extern void func_08C100(long long, void *);

void func_028B98(char *record, long long value)
{
    func_08C100(value, record + 0xf0);
    func_08C100(value, record + 0x134);
    func_08C100(value, record + 0x178);
}
