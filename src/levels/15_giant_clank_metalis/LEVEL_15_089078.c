extern int func_088F48(int *record);

void func_089078(int *record, int value)
{
    int change = value - func_088F48(record);
    record[2] += change;
    record[0] += change;
}
