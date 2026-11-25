/* LEVEL_08:0x12A908 -- placement copy of FRONTEND_01E2A0.c: placement copy of LEVEL_01_11A168.c: maps a 1-based index to its byte in the global table, or -1 when out of range. */
extern char D_003A0A90[];

char func_12A908(int index)
{
    unsigned int slot = index - 1;

    if (slot >= 0x20)
        return -1;
    return D_003A0A90[slot];
}
