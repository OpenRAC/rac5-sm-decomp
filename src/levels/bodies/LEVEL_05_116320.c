extern int *func_116268(void);
extern int func_0283A8(int, long long, long long);

int func_116320(long long unused, long long second, long long third)
{
    int *record = func_116268();
    if (record != 0 && record[0] != 0) {
        if (func_0283A8(record[0] - 1, second, third) == 0) {
            record[1] = 2;
            return 1;
        }
        record[1] = 4;
    }
    return 0;
}
