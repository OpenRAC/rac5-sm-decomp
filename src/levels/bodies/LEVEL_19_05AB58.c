extern void func_1051F0(void *);
extern void func_104310(long long, void *, void *);

void func_05AB58(char *record, long long value)
{
    unsigned char buffer[48];
    func_1051F0(buffer);
    func_104310(value, buffer, record + 0xe58);
}
