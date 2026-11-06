extern void func_12C840(void *);
extern void func_12AF98(long long, void *, void *);

void func_06DD88(char *record, long long value)
{
    unsigned char buffer[48];
    func_12C840(buffer);
    func_12AF98(value, buffer, record + 0xe58);
}
