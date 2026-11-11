/* LEVEL_08:0x236E98 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_0027A728[];

int *func_236E98(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_0027A728;
    return header;
}
