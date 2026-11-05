extern unsigned int D_001C6EC0;

unsigned int func_080538(void)
{
    unsigned int previous = D_001C6EC0;
    if (previous < 0x100u) {
        D_001C6EC0 = previous + 1;
        return previous;
    }
    return 0xffffffffu;
}
