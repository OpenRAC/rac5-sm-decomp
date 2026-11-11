/* LEVEL_07:0x11D298 -- placement copy of FRONTEND_01E380.c: looks up a 12-byte record by low byte and checks its tag word. */
extern int D_0021B0B0[];
int *func_11D298(unsigned int value)
{
    int index = value & 0xFF;
    int *record;
    if (index < 16) {
        record = D_0021B0B0 + index * 3;
        if (record[2] == value)
            return record;
    }
    return 0;
}
