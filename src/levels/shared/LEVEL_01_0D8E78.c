unsigned int func_0D8E78(int *set, int address, int mode, unsigned int value)
{
    if (set[0] + set[3] * 0x40 == address) {
        if (mode == set[5])
            return value;
        return 0xFFFFFFFFu;
    }
    return 0xFF808080u;
}
