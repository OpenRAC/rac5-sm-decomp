extern int *func_11A248(void);
extern int func_029730(int, long long, long long);

int func_11A300(long long unused, long long second, long long third)
{
    int *record = func_11A248();
    if (record != 0 && record[0] != 0) {
        if (func_029730(record[0] - 1, second, third) == 0) {
            record[1] = 2;
            return 1;
        }
        record[1] = 4;
    }
    return 0;
}
