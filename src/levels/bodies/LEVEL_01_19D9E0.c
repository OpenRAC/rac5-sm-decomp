extern void func_1D1508(void);

void func_19D9E0(char *record)
{
    func_1D1508();
    *(unsigned long long *)(record + 0x960) |= 0x40000000000ULL;
}
