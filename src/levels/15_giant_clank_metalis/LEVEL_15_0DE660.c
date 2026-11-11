extern int *func_0DE5A8(unsigned int value);
extern int func_022F08(int, long long, long long);

int func_0DE660(unsigned int value, long long second, long long third)
{
    int *record = func_0DE5A8(value);
    if (record != 0 && record[0] != 0) {
        if (func_022F08(record[0] - 1, second, third) == 0) {
            record[1] = 2;
            return 1;
        }
        record[1] = 4;
    }
    return 0;
}
