extern unsigned int D_00197870;

unsigned int func_079228(void)
{
    unsigned int previous = D_00197870;
    if (previous < 0x100u) {
        D_00197870 = previous + 1;
        return previous;
    }
    return 0xffffffffu;
}
