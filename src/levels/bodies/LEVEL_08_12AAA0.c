extern int *func_12A9E8(unsigned int value);
extern int func_029CA8(int, long long, long long);

int func_12AAA0(unsigned int value, long long second, long long third)
{
    int *record = func_12A9E8(value);
    if (record != 0 && record[0] != 0) {
        if (func_029CA8(record[0] - 1, second, third) == 0) {
            record[1] = 2;
            return 1;
        }
        record[1] = 4;
    }
    return 0;
}
