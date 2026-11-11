extern void func_1DE458(void);

void func_1AFB88(char *record)
{
    func_1DE458();
    *(unsigned long long *)(record + 0x960) |= 0x40000000000ULL;
}
