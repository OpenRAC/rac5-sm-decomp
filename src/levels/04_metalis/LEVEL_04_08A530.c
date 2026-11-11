extern unsigned int D_0020F700;

unsigned int func_08A530(void)
{
    unsigned int previous = D_0020F700;
    if (previous < 0x100u) {
        D_0020F700 = previous + 1;
        return previous;
    }
    return 0xffffffffu;
}
