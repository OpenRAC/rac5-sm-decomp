extern int func_0AD890(int *record);

void func_0AD9C0(int *record, int value)
{
    int change = value - func_0AD890(record);
    record[2] += change;
    record[0] += change;
}
