/* LEVEL_03:0x2067C0 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_002462E0[];

int *func_2067C0(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_002462E0;
    return header;
}
