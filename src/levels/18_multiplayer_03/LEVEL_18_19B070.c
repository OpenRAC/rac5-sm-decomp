/* LEVEL_18:0x19B070 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_001DA4C0[];

int *func_19B070(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_001DA4C0;
    return header;
}
