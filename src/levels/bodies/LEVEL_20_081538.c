extern int func_081408(int *record);

void func_081538(int *record, int value)
{
    int change = value - func_081408(record);
    record[2] += change;
    record[0] += change;
}
