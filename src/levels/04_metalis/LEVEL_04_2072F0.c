/* LEVEL_04:0x2072F0 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_00245C70[];

int *func_2072F0(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_00245C70;
    return header;
}
