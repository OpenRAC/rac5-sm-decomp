extern int func_096208(int *record);

void func_096338(int *record, int value)
{
    int change = value - func_096208(record);
    record[2] += change;
    record[0] += change;
}
