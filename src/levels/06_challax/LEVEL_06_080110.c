extern unsigned int D_001E5140;

unsigned int func_080110(void)
{
    unsigned int previous = D_001E5140;
    if (previous < 0x100u) {
        D_001E5140 = previous + 1;
        return previous;
    }
    return 0xffffffffu;
}
