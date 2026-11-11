extern unsigned int D_001F6240;

unsigned int func_087298(void)
{
    unsigned int previous = D_001F6240;
    if (previous < 0x100u) {
        D_001F6240 = previous + 1;
        return previous;
    }
    return 0xffffffffu;
}
