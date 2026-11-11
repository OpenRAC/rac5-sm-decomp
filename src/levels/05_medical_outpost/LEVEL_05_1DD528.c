/* LEVEL_05:0x1DD528 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_00217160[];

int *func_1DD528(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_00217160;
    return header;
}
