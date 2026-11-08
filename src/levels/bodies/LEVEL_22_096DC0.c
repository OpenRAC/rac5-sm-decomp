extern int func_096C90(int *record);

void func_096DC0(int *record, int value)
{
    int change = value - func_096C90(record);
    record[2] += change;
    record[0] += change;
}
