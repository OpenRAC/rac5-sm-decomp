/* LEVEL_05:0x0A1AB8 -- placement copy of LEVEL_01_0A34F8.c: stores a value into an indexed table of a typed entry when the slot is below the entry count. */
extern char D_0028AEC8[];
extern unsigned int *func_09EE08(char *object, int unused0, int unused1);
extern int func_09ED80(char *object);
unsigned int func_0A1AB8(int index, unsigned int slot, unsigned int value)
{
    char *object = D_0028AEC8 + index * 100;
    unsigned int *values = func_09EE08(object, 0, 0);
    unsigned int result = 0;
    char *entry = (char *)func_09ED80(object);
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
