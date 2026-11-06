extern int *func_0DE5A8(void);
extern int func_022F08(int, long long, long long);

int func_0DE660(long long unused, long long second, long long third)
{
    int *record = func_0DE5A8();
    if (record != 0 && record[0] != 0) {
        if (func_022F08(record[0] - 1, second, third) == 0) {
            record[1] = 2;
            return 1;
        }
        record[1] = 4;
    }
    return 0;
}
