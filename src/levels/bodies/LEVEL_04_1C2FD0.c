void func_1C2FD0(char *object, int enabled)
{
    int bit = (enabled ^ 1) & 1;
    int *flags = (int *)(object + 0x64);
    *flags = (((*flags & -17) | (bit << 4)) & -33) | (bit << 5);
}
