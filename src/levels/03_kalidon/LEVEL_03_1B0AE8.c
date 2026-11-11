extern void func_1E1CA0(void);

void func_1B0AE8(char *record)
{
    func_1E1CA0();
    *(unsigned long long *)(record + 0x960) |= 0x40000000000ULL;
}
