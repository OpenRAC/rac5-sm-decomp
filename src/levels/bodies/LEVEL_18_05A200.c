extern void func_1033A8(void *);
extern void func_1024C8(long long, void *, void *);

void func_05A200(char *record, long long value)
{
    unsigned char buffer[48];
    func_1033A8(buffer);
    func_1024C8(value, buffer, record + 0xe58);
}
