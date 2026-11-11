/* LEVEL_01:0x069420 -- placement copy of LEVEL_02_06E4B8.c. */
extern unsigned short func_03A360(char *object);

void func_069420(char *object, long enabled)
{
    char *first = *(char **)(object + 0x5A4);
    if (first != 0) {
        if (enabled != 0)
            *(unsigned short *)(first + 0x74) = func_03A360(object);
        else
            *(unsigned short *)(first + 0x74) = 0xFFFF;
    }
    first = *(char **)(object + 0x5A8);
    if (first != 0) {
        if (enabled != 0)
            *(unsigned short *)(first + 0x74) = func_03A360(object);
        else
            *(unsigned short *)(first + 0x74) = 0xFFFF;
    }
}
