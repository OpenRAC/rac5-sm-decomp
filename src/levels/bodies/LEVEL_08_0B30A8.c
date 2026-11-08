extern int func_0B2F78(int *record);

void func_0B30A8(int *record, int value)
{
    int change = value - func_0B2F78(record);
    record[2] += change;
    record[0] += change;
}
