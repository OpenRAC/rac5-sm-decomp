extern void func_1BD4E8(void);

void func_1935B8(char *record)
{
    func_1BD4E8();
    *(unsigned long long *)(record + 0x960) |= 0x40000000000ULL;
}
