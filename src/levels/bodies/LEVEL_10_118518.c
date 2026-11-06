extern int *func_118460(void);
extern int func_029508(int, long long, long long);

int func_118518(long long unused, long long second, long long third)
{
    int *record = func_118460();
    if (record != 0 && record[0] != 0) {
        if (func_029508(record[0] - 1, second, third) == 0) {
            record[1] = 2;
            return 1;
        }
        record[1] = 4;
    }
    return 0;
}
