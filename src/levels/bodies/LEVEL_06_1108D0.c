extern int *func_110818(void);
extern int func_027B18(int, long long, long long);

int func_1108D0(long long unused, long long second, long long third)
{
    int *record = func_110818();
    if (record != 0 && record[0] != 0) {
        if (func_027B18(record[0] - 1, second, third) == 0) {
            record[1] = 2;
            return 1;
        }
        record[1] = 4;
    }
    return 0;
}
