/* LEVEL_23:0x1C1750 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_001F8928[];

int *func_1C1750(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_001F8928;
    return header;
}
