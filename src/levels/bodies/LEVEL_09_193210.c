extern void func_1B8408(void);

void func_193210(char *record)
{
    func_1B8408();
    *(unsigned long long *)(record + 0x960) |= 0x40000000000ULL;
}
