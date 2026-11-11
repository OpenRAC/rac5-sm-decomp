void func_1E2B68(char *source, char *object)
{
    unsigned int *target = *(unsigned int **)(object + 0x4C);
    if (target != 0) {
        unsigned int value = *(unsigned int *)(source + 0x44);
        unsigned int old = *target;
        value &= 0xFFFFFFu;
        old &= 0xFF000000u;
        old |= value;
        *target = old;
    }
}
