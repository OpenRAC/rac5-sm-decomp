/* LEVEL_05:0x116268 -- placement copy of FRONTEND_01E380.c: looks up a 12-byte record by low byte and checks its tag word. */
extern int D_001F5E30[];
int *func_116268(unsigned int value)
{
    int index = value & 0xFF;
    int *record;
    if (index < 16) {
        record = D_001F5E30 + index * 3;
        if (record[2] == value)
            return record;
    }
    return 0;
}
