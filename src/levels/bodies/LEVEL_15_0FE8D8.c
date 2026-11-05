void func_0FE8D8(char *object, int *state, int enabled)
{
    int active = enabled != 0 && (unsigned int)(*state - 4) < 2;
    if (*(unsigned char *)object == 0)
        *(int *)(object + 0xC) = 0;
    *(unsigned char *)object = active;
    if (!active) {
        *(int *)(object + 0x10) = 0;
        *(int *)(object + 0x14) = 0;
    }
}
