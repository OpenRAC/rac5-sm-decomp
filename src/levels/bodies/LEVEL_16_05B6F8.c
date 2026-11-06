extern void func_104AE0(void *);
extern void func_103C00(long long, void *, void *);

void func_05B6F8(char *record, long long value)
{
    unsigned char buffer[48];
    func_104AE0(buffer);
    func_103C00(value, buffer, record + 0xe58);
}
