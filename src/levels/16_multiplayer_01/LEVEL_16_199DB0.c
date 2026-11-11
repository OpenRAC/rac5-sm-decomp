/* LEVEL_16:0x199DB0 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_001DA198[];

int *func_199DB0(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_001DA198;
    return header;
}
