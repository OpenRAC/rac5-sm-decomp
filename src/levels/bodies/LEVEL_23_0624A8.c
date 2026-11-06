extern void func_117190(void *);
extern void func_115B08(long long, void *, void *);

void func_0624A8(char *record, long long value)
{
    unsigned char buffer[48];
    func_117190(buffer);
    func_115B08(value, buffer, record + 0xe58);
}
