extern int func_0A1EF8(int *record);

void func_0A2028(int *record, int value)
{
    int change = value - func_0A1EF8(record);
    record[2] += change;
    record[0] += change;
}
