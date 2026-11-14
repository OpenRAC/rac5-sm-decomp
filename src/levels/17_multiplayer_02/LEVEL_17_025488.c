/* LEVEL_17:0x025488 -- placement copy of LEVEL_16_025B08.c: finds the entry with the given key among the four slots of a group and returns its value byte, or -1. */
extern char *D_001950B4;

int func_025488(int index, int key)
{
    unsigned char *p;
    char *base;
    unsigned int i;

    base = D_001950B4 + 0xCC4;
    p = (unsigned char *)(index * 0x20 + (int)base);

    for (i = 0; i < 4; i++) {
        if (*(int *)(p - 4) == key)
            return *p;
        p += 8;
    }
    return -1;
}
