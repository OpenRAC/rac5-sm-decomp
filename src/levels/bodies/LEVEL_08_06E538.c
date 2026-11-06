extern void func_137770(void *);
extern void func_135F90(long long, void *, void *);

void func_06E538(char *record, long long value)
{
    unsigned char buffer[48];
    func_137770(buffer);
    func_135F90(value, buffer, record + 0xe58);
}
