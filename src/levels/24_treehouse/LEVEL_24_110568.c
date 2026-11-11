extern int *func_1104B0(unsigned int value);
extern int func_026C70(int, long long, long long);

int func_110568(unsigned int value, long long second, long long third)
{
    int *record = func_1104B0(value);
    if (record != 0 && record[0] != 0) {
        if (func_026C70(record[0] - 1, second, third) == 0) {
            record[1] = 2;
            return 1;
        }
        record[1] = 4;
    }
    return 0;
}
