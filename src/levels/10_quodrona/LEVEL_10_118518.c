extern int *func_118460(unsigned int value);
extern int func_029508(int, long long, long long);

int func_118518(unsigned int value, long long second, long long third)
{
    int *record = func_118460(value);
    if (record != 0 && record[0] != 0) {
        if (func_029508(record[0] - 1, second, third) == 0) {
            record[1] = 2;
            return 1;
        }
        record[1] = 4;
    }
    return 0;
}
