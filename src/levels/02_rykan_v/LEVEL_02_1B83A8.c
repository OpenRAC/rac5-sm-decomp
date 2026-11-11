extern void func_1E61A0(void);

void func_1B83A8(char *record)
{
    func_1E61A0();
    *(unsigned long long *)(record + 0x960) |= 0x40000000000ULL;
}
