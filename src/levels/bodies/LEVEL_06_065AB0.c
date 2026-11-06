extern void func_11C9F0(void *);
extern void func_11B368(long long, void *, void *);

void func_065AB0(char *record, long long value)
{
    unsigned char buffer[48];
    func_11C9F0(buffer);
    func_11B368(value, buffer, record + 0xe58);
}
