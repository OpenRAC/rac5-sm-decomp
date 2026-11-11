/* LEVEL_15:0x142E28 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_00173590[];

int *func_142E28(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_00173590;
    return header;
}
