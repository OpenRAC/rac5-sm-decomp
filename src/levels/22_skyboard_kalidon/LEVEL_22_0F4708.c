/* LEVEL_22:0x0F4708 -- placement copy of FRONTEND_01E380.c: looks up a 12-byte record by low byte and checks its tag word. */
extern int D_00165D90[];
int *func_0F4708(unsigned int value)
{
    int index = value & 0xFF;
    int *record;
    if (index < 16) {
        record = D_00165D90 + index * 3;
        if (record[2] == value)
            return record;
    }
    return 0;
}
