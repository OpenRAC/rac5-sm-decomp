/* LEVEL_19:0x19AF78 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_001DA348[];

int *func_19AF78(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_001DA348;
    return header;
}
