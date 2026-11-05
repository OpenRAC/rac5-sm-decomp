extern unsigned int D_001C9640;

unsigned int func_07D158(void)
{
    unsigned int previous = D_001C9640;
    if (previous < 0x100u) {
        D_001C9640 = previous + 1;
        return previous;
    }
    return 0xffffffffu;
}
