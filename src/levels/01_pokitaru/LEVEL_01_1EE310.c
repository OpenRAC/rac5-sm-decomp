/* LEVEL_01:0x1EE310 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_0022B4A8[];

int *func_1EE310(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_0022B4A8;
    return header;
}
