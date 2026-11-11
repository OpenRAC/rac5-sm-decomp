extern unsigned int D_0023F100;

unsigned int func_08F2E8(void)
{
    unsigned int previous = D_0023F100;
    if (previous < 0x100u) {
        D_0023F100 = previous + 1;
        return previous;
    }
    return 0xffffffffu;
}
