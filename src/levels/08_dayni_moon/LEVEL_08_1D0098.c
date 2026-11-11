extern void func_210FF8(void);

void func_1D0098(char *record)
{
    func_210FF8();
    *(unsigned long long *)(record + 0x960) |= 0x40000000000ULL;
}
