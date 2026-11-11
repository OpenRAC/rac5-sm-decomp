/* LEVEL_21:0x143008 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_001735D8[];

int *func_143008(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_001735D8;
    return header;
}
