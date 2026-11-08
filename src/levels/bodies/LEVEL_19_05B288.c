extern unsigned short func_035808(char *object);

void func_05B288(char *object, long enabled)
{
    char *first = *(char **)(object + 0x5A4);
    if (first != 0) {
        if (enabled != 0)
            *(unsigned short *)(first + 0x74) = func_035808(object);
        else
            *(unsigned short *)(first + 0x74) = 0xFFFF;
    }
    first = *(char **)(object + 0x5A8);
    if (first != 0) {
        if (enabled != 0)
            *(unsigned short *)(first + 0x74) = func_035808(object);
        else
            *(unsigned short *)(first + 0x74) = 0xFFFF;
    }
}
