/* LEVEL_17:0x18D3F8 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_001CB4A8[];

int *func_18D3F8(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_001CB4A8;
    return header;
}
