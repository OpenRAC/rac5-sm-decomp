/* FRONTEND:0x026CE0 -- placement copy of LEVEL_01_1EE130.c: initializes a two-word header with the argument and the address of the shared table, returns the header. */
extern char D_0010A170[];

int *func_026CE0(int *header, int value)
{
    header[0] = value;
    header[1] = (int)D_0010A170;
    return header;
}
