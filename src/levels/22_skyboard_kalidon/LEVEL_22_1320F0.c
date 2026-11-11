extern void func_13CAF8(void);

void func_1320F0(char *record)
{
    func_13CAF8();
    *(unsigned long long *)(record + 0x960) |= 0x40000000000ULL;
}
