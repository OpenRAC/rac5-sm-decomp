/* LEVEL_24:0x1BEFE8 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_001F7358[];

int *func_1BEFE8(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_001F7358;
    return header;
}
