extern int func_0A8400(int *record);

void func_0A8530(int *record, int value)
{
    int change = value - func_0A8400(record);
    record[2] += change;
    record[0] += change;
}
