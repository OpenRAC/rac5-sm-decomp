/* FRONTEND:0x01E2A0 -- placement copy of LEVEL_01_11A168.c: maps a 1-based index to its byte in the global table, or -1 when out of range. */
extern char D_001B7880[];

char func_01E2A0(int index)
{
    unsigned int slot = index - 1;

    if (slot >= 0x20)
        return -1;
    return D_001B7880[slot];
}
