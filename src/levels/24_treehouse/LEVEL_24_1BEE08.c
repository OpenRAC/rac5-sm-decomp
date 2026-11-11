/* LEVEL_24:0x1BEE08 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_001F7310[];

int *func_1BEE08(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_001F7310;
    return header;
}
