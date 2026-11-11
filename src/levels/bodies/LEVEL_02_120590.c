/* LEVEL_02:0x120590 -- placement copy of FRONTEND_01E380.c: looks up a 12-byte record by low byte and checks its tag word. */
extern int D_0021BD70[];
int *func_120590(unsigned int value)
{
    int index = value & 0xFF;
    int *record;
    if (index < 16) {
        record = D_0021BD70 + index * 3;
        if (record[2] == value)
            return record;
    }
    return 0;
}
