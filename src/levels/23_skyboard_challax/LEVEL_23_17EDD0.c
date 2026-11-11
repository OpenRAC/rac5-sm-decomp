extern void func_1A2EA0(void);

void func_17EDD0(char *record)
{
    func_1A2EA0();
    *(unsigned long long *)(record + 0x960) |= 0x40000000000ULL;
}
