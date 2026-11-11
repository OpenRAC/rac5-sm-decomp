/* LEVEL_09:0x1D8178 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_00212C18[];

int *func_1D8178(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_00212C18;
    return header;
}
