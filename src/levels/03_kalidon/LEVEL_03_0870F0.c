extern unsigned int D_0020E8C0;

unsigned int func_0870F0(void)
{
    unsigned int previous = D_0020E8C0;
    if (previous < 0x100u) {
        D_0020E8C0 = previous + 1;
        return previous;
    }
    return 0xffffffffu;
}
