/* LEVEL_24:0x1104B0 -- placement copy of FRONTEND_01E380.c: looks up a 12-byte record by low byte and checks its tag word. */
extern int D_001D7A30[];
int *func_1104B0(unsigned int value)
{
    int index = value & 0xFF;
    int *record;
    if (index < 16) {
        record = D_001D7A30 + index * 3;
        if (record[2] == value)
            return record;
    }
    return 0;
}
