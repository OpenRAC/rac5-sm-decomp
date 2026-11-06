extern void func_1D58B0(void);

void func_1A7AE8(char *record)
{
    func_1D58B0();
    *(unsigned long long *)(record + 0x960) |= 0x40000000000ULL;
}
