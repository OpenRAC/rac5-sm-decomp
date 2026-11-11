extern int func_09F3F0(int *record);

void func_09F520(int *record, int value)
{
    int change = value - func_09F3F0(record);
    record[2] += change;
    record[0] += change;
}
