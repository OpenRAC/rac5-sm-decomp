extern int func_0A6C40(int *record);

void func_0A6D70(int *record, int value)
{
    int change = value - func_0A6C40(record);
    record[2] += change;
    record[0] += change;
}
