/* LEVEL_17:0x18D218 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_001CB460[];

int *func_18D218(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_001CB460;
    return header;
}
