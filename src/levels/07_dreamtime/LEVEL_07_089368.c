extern unsigned int D_0020A540;

unsigned int func_089368(void)
{
    unsigned int previous = D_0020A540;
    if (previous < 0x100u) {
        D_0020A540 = previous + 1;
        return previous;
    }
    return 0xffffffffu;
}
