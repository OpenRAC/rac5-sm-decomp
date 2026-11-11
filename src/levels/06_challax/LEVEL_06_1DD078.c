/* LEVEL_06:0x1DD078 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_002181B0[];

int *func_1DD078(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_002181B0;
    return header;
}
