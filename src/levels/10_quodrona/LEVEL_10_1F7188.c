/* LEVEL_10:0x1F7188 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_00234820[];

int *func_1F7188(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_00234820;
    return header;
}
