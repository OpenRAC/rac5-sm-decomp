/* LEVEL_01:0x0A87B0 -- placement copy of LEVEL_02_0AF0C0.c. */
extern int func_0A8680(int *record);

void func_0A87B0(int *record, int value)
{
    int change = value - func_0A8680(record);
    record[2] += change;
    record[0] += change;
}
