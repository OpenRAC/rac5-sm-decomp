extern int *func_120590(unsigned int value);
extern int func_029EF8(int, long long, long long);

int func_120648(unsigned int value, long long second, long long third)
{
    int *record = func_120590(value);
    if (record != 0 && record[0] != 0) {
        if (func_029EF8(record[0] - 1, second, third) == 0) {
            record[1] = 2;
            return 1;
        }
        record[1] = 4;
    }
    return 0;
}
