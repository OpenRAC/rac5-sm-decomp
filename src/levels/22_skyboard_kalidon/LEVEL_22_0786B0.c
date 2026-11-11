extern unsigned int D_001555C0;

unsigned int func_0786B0(void)
{
    unsigned int previous = D_001555C0;
    if (previous < 0x100u) {
        D_001555C0 = previous + 1;
        return previous;
    }
    return 0xffffffffu;
}
