extern void func_08DE00(long long, void *);

void func_029100(char *record, long long value)
{
    func_08DE00(value, record + 0xf0);
    func_08DE00(value, record + 0x134);
    func_08DE00(value, record + 0x178);
}
