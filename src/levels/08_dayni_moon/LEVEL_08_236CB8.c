/* LEVEL_08:0x236CB8 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_0027A6E0[];

int *func_236CB8(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_0027A6E0;
    return header;
}
