extern void func_1040F0(void *);
extern void func_103210(long long, void *, void *);

void func_05B128(char *record, long long value)
{
    unsigned char buffer[48];
    func_1040F0(buffer);
    func_103210(value, buffer, record + 0xe58);
}
