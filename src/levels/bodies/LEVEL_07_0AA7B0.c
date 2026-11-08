extern int func_0AA680(int *record);

void func_0AA7B0(int *record, int value)
{
    int change = value - func_0AA680(record);
    record[2] += change;
    record[0] += change;
}
