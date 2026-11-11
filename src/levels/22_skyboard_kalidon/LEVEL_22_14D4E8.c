/* LEVEL_22:0x14D4E8 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_0017D050[];

int *func_14D4E8(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_0017D050;
    return header;
}
