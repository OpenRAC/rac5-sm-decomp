extern void func_1246C8(void *);
extern void func_123040(long long, void *, void *);

void func_067678(char *record, long long value)
{
    unsigned char buffer[48];
    func_1246C8(buffer);
    func_123040(value, buffer, record + 0xe58);
}
