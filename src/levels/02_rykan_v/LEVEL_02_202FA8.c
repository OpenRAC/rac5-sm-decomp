/* LEVEL_02:0x202FA8 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_002429A8[];

int *func_202FA8(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_002429A8;
    return header;
}
