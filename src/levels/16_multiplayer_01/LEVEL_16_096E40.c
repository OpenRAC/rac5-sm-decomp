extern int func_096D10(int *record);

void func_096E40(int *record, int value)
{
    int change = value - func_096D10(record);
    record[2] += change;
    record[0] += change;
}
