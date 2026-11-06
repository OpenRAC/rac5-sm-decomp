extern int *func_1104B0(void);
extern int func_026C70(int, long long, long long);

int func_110568(long long unused, long long second, long long third)
{
    int *record = func_1104B0();
    if (record != 0 && record[0] != 0) {
        if (func_026C70(record[0] - 1, second, third) == 0) {
            record[1] = 2;
            return 1;
        }
        record[1] = 4;
    }
    return 0;
}
