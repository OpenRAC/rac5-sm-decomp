/* LEVEL_19:0x19AD98 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_001DA300[];

int *func_19AD98(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_001DA300;
    return header;
}
