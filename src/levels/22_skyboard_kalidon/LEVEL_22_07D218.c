void func_07D218(char *record, int value)
{
    record[0] = value;
    *(int *)(record + 8) = 0;
    record[1] = 0;
    record[2] = 0;
    record[3] = 0;
    record[5] = -1;
    record[4] = -1;
}
