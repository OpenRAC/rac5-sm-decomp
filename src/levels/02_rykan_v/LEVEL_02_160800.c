void func_160800(char *object, int enabled)
{
    char *child = *(char **)(object + 0x58);
    if (enabled != 0) {
        char *record = child + 0xB4;
        *(unsigned short *)(record + 0xC) &= ~8u;
    } else {
        char *record = child + 0xB4;
        *(unsigned short *)(record + 0xC) |= 8u;
    }
}
