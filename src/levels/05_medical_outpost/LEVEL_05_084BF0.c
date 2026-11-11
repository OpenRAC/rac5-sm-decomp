extern unsigned int D_001E55C0;

unsigned int func_084BF0(void)
{
    unsigned int previous = D_001E55C0;
    if (previous < 0x100u) {
        D_001E55C0 = previous + 1;
        return previous;
    }
    return 0xffffffffu;
}
