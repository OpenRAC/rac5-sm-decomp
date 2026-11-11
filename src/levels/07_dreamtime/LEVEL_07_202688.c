/* LEVEL_07:0x202688 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_00240D88[];

int *func_202688(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_00240D88;
    return header;
}
