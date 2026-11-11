extern unsigned int D_00106950;

unsigned int func_066420(void)
{
    unsigned int previous = D_00106950;
    if (previous < 0x100u) {
        D_00106950 = previous + 1;
        return previous;
    }
    return 0xffffffffu;
}
