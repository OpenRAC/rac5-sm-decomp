extern void func_1C0198(void);

void func_19BCE0(char *record)
{
    func_1C0198();
    *(unsigned long long *)(record + 0x960) |= 0x40000000000ULL;
}
