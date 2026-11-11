/* LEVEL_23:0x09A238 -- placement copy of LEVEL_01_0A34F8.c: stores a value into an indexed table of a typed entry when the slot is below the entry count. */
extern char D_00270448[];
extern unsigned int *func_097598(char *object, int unused0, int unused1);
extern int func_097510(char *object);
unsigned int func_09A238(int index, unsigned int slot, unsigned int value)
{
    char *object = D_00270448 + index * 100;
    unsigned int *values = func_097598(object, 0, 0);
    unsigned int result = 0;
    char *entry = (char *)func_097510(object);
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
