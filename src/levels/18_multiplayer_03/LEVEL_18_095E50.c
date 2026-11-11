extern int func_095D20(int *record);

void func_095E50(int *record, int value)
{
    int change = value - func_095D20(record);
    record[2] += change;
    record[0] += change;
}
