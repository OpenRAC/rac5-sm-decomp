/* FRONTEND:0x01E380 -- looks up a 12-byte record by low byte and checks its tag word. */
extern int D_00032608[];
int *func_01E380(unsigned int value)
{
    int index = value & 0xFF;
    int *record;
    if (index < 16) {
        record = D_00032608 + index * 3;
        if (record[2] == value)
            return record;
    }
    return 0;
}
