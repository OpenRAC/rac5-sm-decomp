void func_037710(char *object, int enabled)
{
    char *child = *(char **)(object + 0x58);
    if (enabled != 0) {
        char *record = child + 4;
        *(unsigned short *)(record + 0xC) &= ~8u;
    } else {
        char *record = child + 4;
        *(unsigned short *)(record + 0xC) |= 8u;
    }
}
