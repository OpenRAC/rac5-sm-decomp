extern unsigned int D_001FF240;

unsigned int func_087600(void)
{
    unsigned int previous = D_001FF240;
    if (previous < 0x100u) {
        D_001FF240 = previous + 1;
        return previous;
    }
    return 0xffffffffu;
}
