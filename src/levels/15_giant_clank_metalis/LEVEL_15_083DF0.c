/* LEVEL_15:0x083DF0 -- placement copy of LEVEL_01_0A34F8.c: stores a value into an indexed table of a typed entry when the slot is below the entry count. */
extern char D_001B7048[];
extern unsigned int *func_0811B8(char *object, int unused0, int unused1);
extern int func_081130(char *object);
unsigned int func_083DF0(int index, unsigned int slot, unsigned int value)
{
    char *object = D_001B7048 + index * 100;
    unsigned int *values = func_0811B8(object, 0, 0);
    unsigned int result = 0;
    char *entry = (char *)func_081130(object);
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
