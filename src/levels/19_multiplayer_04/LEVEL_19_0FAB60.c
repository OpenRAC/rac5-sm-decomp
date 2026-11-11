/* LEVEL_19:0x0FAB60 -- placement copy of FRONTEND_01E380.c: looks up a 12-byte record by low byte and checks its tag word. */
extern int D_001B5A40[];
int *func_0FAB60(unsigned int value)
{
    int index = value & 0xFF;
    int *record;
    if (index < 16) {
        record = D_001B5A40 + index * 3;
        if (record[2] == value)
            return record;
    }
    return 0;
}
