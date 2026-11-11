extern int func_0A5930(int *record);

void func_0A5A60(int *record, int value)
{
    int change = value - func_0A5930(record);
    record[2] += change;
    record[0] += change;
}
