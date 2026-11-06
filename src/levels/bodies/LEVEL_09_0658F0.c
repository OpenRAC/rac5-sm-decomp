extern void func_11F5A8(void *);
extern void func_11E140(long long, void *, void *);

void func_0658F0(char *record, long long value)
{
    unsigned char buffer[48];
    func_11F5A8(buffer);
    func_11E140(value, buffer, record + 0xe58);
}
