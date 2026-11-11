/* LEVEL_01:0x1EE130 -- initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_0022B460[];

int *func_1EE130(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_0022B460;
    return header;
}
