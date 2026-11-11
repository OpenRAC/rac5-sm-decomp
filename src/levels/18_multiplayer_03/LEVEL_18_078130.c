extern unsigned int D_001A56F0;

unsigned int func_078130(void)
{
    unsigned int previous = D_001A56F0;
    if (previous < 0x100u) {
        D_001A56F0 = previous + 1;
        return previous;
    }
    return 0xffffffffu;
}
