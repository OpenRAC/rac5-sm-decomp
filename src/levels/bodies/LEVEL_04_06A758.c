extern void func_1326C0(void *);
extern void func_130CC0(long long, void *, void *);

void func_06A758(char *record, long long value)
{
    unsigned char buffer[48];
    func_1326C0(buffer);
    func_130CC0(value, buffer, record + 0xe58);
}
