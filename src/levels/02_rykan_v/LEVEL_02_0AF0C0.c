extern int func_0AEF90(int *record);

void func_0AF0C0(int *record, int value)
{
    int change = value - func_0AEF90(record);
    record[2] += change;
    record[0] += change;
}
