extern unsigned int D_001A4270;

unsigned int func_0787B0(void)
{
    unsigned int previous = D_001A4270;
    if (previous < 0x100u) {
        D_001A4270 = previous + 1;
        return previous;
    }
    return 0xffffffffu;
}
