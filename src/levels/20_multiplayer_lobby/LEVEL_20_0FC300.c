/* LEVEL_20:0x0FC300 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_00131AD0[];

int *func_0FC300(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_00131AD0;
    return header;
}
