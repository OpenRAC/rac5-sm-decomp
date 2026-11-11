/* LEVEL_10:0x0A4610 -- placement copy of LEVEL_01_0A34F8.c: stores a value into an indexed table of a typed entry when the slot is below the entry count. */
extern char D_002A8408[];
extern unsigned int *func_0A1930(char *object, int unused0, int unused1);
extern int func_0A18A8(char *object);
unsigned int func_0A4610(int index, unsigned int slot, unsigned int value)
{
    char *object = D_002A8408 + index * 100;
    unsigned int *values = func_0A1930(object, 0, 0);
    unsigned int result = 0;
    char *entry = (char *)func_0A18A8(object);
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
