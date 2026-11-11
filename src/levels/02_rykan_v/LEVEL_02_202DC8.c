/* LEVEL_02:0x202DC8 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_00242960[];

int *func_202DC8(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_00242960;
    return header;
}
