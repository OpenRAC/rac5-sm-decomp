extern int func_0A9798(int *record);

void func_0A98C8(int *record, int value)
{
    int change = value - func_0A9798(record);
    record[2] += change;
    record[0] += change;
}
