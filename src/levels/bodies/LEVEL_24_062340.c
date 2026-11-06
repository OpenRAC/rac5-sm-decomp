extern void func_11C078(void *);
extern void func_11AC10(long long, void *, void *);

void func_062340(char *record, long long value)
{
    unsigned char buffer[48];
    func_11C078(buffer);
    func_11AC10(value, buffer, record + 0xe58);
}
