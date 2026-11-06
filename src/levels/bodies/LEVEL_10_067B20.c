extern void func_1243D0(void *);
extern void func_122F68(long long, void *, void *);

void func_067B20(char *record, long long value)
{
    unsigned char buffer[48];
    func_1243D0(buffer);
    func_122F68(value, buffer, record + 0xe58);
}
