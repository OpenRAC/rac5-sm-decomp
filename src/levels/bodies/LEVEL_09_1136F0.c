extern int *func_113638(void);
extern int func_028598(int, long long, long long);

int func_1136F0(long long unused, long long second, long long third)
{
    int *record = func_113638();
    if (record != 0 && record[0] != 0) {
        if (func_028598(record[0] - 1, second, third) == 0) {
            record[1] = 2;
            return 1;
        }
        record[1] = 4;
    }
    return 0;
}
