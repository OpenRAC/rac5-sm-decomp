extern unsigned int D_001A53F0;

unsigned int func_078C98(void)
{
    unsigned int previous = D_001A53F0;
    if (previous < 0x100u) {
        D_001A53F0 = previous + 1;
        return previous;
    }
    return 0xffffffffu;
}
