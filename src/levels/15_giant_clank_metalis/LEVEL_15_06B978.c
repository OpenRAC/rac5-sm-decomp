extern unsigned int D_0014AEC0;

unsigned int func_06B978(void)
{
    unsigned int previous = D_0014AEC0;
    if (previous < 0x100u) {
        D_0014AEC0 = previous + 1;
        return previous;
    }
    return 0xffffffffu;
}
