/* LEVEL_03:0x2069A0 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_00246328[];

int *func_2069A0(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_00246328;
    return header;
}
