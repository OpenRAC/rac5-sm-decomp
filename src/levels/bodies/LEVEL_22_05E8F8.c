extern void func_0FE560(void *);
extern void func_0FD580(long long, void *, void *);

void func_05E8F8(char *record, long long value)
{
    unsigned char buffer[48];
    func_0FE560(buffer);
    func_0FD580(value, buffer, record + 0xe58);
}
