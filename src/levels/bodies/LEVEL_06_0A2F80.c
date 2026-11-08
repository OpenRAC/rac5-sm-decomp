extern int func_0A2E50(int *record);

void func_0A2F80(int *record, int value)
{
    int change = value - func_0A2E50(record);
    record[2] += change;
    record[0] += change;
}
