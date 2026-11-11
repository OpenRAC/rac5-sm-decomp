extern int func_0965A0(int *record);

void func_0966D0(int *record, int value)
{
    int change = value - func_0965A0(record);
    record[2] += change;
    record[0] += change;
}
