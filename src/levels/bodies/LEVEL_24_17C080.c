extern void func_1A1A08(void);

void func_17C080(char *record)
{
    func_1A1A08();
    *(unsigned long long *)(record + 0x960) |= 0x40000000000ULL;
}
