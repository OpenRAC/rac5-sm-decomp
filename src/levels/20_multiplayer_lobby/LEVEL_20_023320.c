extern void func_06AF80(long long, void *);

void func_023320(char *record, long long value)
{
    func_06AF80(value, record + 0xf0);
    func_06AF80(value, record + 0x134);
    func_06AF80(value, record + 0x178);
}
