extern unsigned int D_001E0040;

unsigned int func_083C50(void)
{
    unsigned int previous = D_001E0040;
    if (previous < 0x100u) {
        D_001E0040 = previous + 1;
        return previous;
    }
    return 0xffffffffu;
}
