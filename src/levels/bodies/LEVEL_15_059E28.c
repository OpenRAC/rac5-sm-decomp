extern void func_0EB068(void *);
extern void func_0EA110(long long, void *, void *);

void func_059E28(char *record, long long value)
{
    unsigned char buffer[48];
    func_0EB068(buffer);
    func_0EA110(value, buffer, record + 0xe58);
}
