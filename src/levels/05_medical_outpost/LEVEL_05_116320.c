extern int *func_116268(unsigned int value);
extern int func_0283A8(int, long long, long long);

int func_116320(unsigned int value, long long second, long long third)
{
    int *record = func_116268(value);
    if (record != 0 && record[0] != 0) {
        if (func_0283A8(record[0] - 1, second, third) == 0) {
            record[1] = 2;
            return 1;
        }
        record[1] = 4;
    }
    return 0;
}
