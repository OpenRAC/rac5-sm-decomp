/* LEVEL_10:0x118380 -- placement copy of FRONTEND_01E2A0.c: placement copy of LEVEL_01_11A168.c: maps a 1-based index to its byte in the global table, or -1 when out of range. */
extern char D_0035AC10[];

char func_118380(int index)
{
    unsigned int slot = index - 1;

    if (slot >= 0x20)
        return -1;
    return D_0035AC10[slot];
}
