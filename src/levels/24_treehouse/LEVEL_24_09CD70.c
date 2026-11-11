/* LEVEL_24:0x09CD70 -- placement copy of LEVEL_01_0A34F8.c: stores a value into an indexed table of a typed entry when the slot is below the entry count. */
extern char D_0026AEC8[];
extern unsigned int *func_09A0D0(char *object, int unused0, int unused1);
extern int func_09A048(char *object);
unsigned int func_09CD70(int index, unsigned int slot, unsigned int value)
{
    char *object = D_0026AEC8 + index * 100;
    unsigned int *values = func_09A0D0(object, 0, 0);
    unsigned int result = 0;
    char *entry = (char *)func_09A048(object);
    if (entry == 0)
        return 0;
    if (*(unsigned short *)(entry + 4) != 3)
        return 0;
    if (slot < *(unsigned short *)(entry + 8)) {
        result = 1;
        values[slot] = value;
    }
    return result;
}
