extern unsigned int D_0020B200;

unsigned int func_08DBC8(void)
{
    unsigned int previous = D_0020B200;
    if (previous < 0x100u) {
        D_0020B200 = previous + 1;
        return previous;
    }
    return 0xffffffffu;
}
