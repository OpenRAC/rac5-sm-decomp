extern int *func_1257B0(unsigned int value);
extern int func_0291D8(int, long long, long long);

int func_125868(unsigned int value, long long second, long long third)
{
    int *record = func_1257B0(value);
    if (record != 0 && record[0] != 0) {
        if (func_0291D8(record[0] - 1, second, third) == 0) {
            record[1] = 2;
            return 1;
        }
        record[1] = 4;
    }
    return 0;
}
