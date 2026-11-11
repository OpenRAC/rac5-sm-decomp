extern void func_1E84F0(void);

void func_1A9590(char *record)
{
    func_1E84F0();
    *(unsigned long long *)(record + 0x960) |= 0x40000000000ULL;
}
