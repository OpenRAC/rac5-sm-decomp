/* LEVEL_21:0x0DE5A8 -- placement copy of FRONTEND_01E380.c: looks up a 12-byte record by low byte and checks its tag word. */
extern int D_0015B730[];
int *func_0DE5A8(unsigned int value)
{
    int index = value & 0xFF;
    int *record;
    if (index < 16) {
        record = D_0015B730 + index * 3;
        if (record[2] == value)
            return record;
    }
    return 0;
}
