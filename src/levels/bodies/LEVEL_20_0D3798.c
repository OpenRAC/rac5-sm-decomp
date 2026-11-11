/* LEVEL_20:0x0D3798 -- placement copy of FRONTEND_01E380.c: looks up a 12-byte record by low byte and checks its tag word. */
extern int D_00116FA0[];
int *func_0D3798(unsigned int value)
{
    int index = value & 0xFF;
    int *record;
    if (index < 16) {
        record = D_00116FA0 + index * 3;
        if (record[2] == value)
            return record;
    }
    return 0;
}
