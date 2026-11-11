/* LEVEL_01:0x04B4C0 -- placement copy of LEVEL_02_050448.c. */
void func_04B4C0(char *object)
{
    unsigned long long *flags = (unsigned long long *)(object + 0x960);
    *flags &= ~(1ULL << 36);
}
