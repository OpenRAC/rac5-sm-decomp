void func_1E2B38(int unused, char *object, unsigned int value)
{
    unsigned int *target = *(unsigned int **)(object + 0x4C);
    if (target != 0) {
        unsigned int old = *target;
        unsigned int low = value & 0xFFFFFFu;
        unsigned int high = old & 0xFF000000u;
        high |= low;
        *target = high;
    }
}
