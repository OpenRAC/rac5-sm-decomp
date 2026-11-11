extern long long func_16B2F0(void);
extern void func_1698B8(char *, unsigned char, long long);

void func_16ACE8(char *record)
{
    long long value = func_16B2F0();
    func_1698B8(record, record[0x45], value);
}
