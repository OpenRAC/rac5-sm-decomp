extern int *func_0FAB60(unsigned int value);
extern int func_026D30(int, long long, long long);

int func_0FAC18(unsigned int value, long long second, long long third)
{
    int *record = func_0FAB60(value);
    if (record != 0 && record[0] != 0) {
        if (func_026D30(record[0] - 1, second, third) == 0) {
            record[1] = 2;
            return 1;
        }
        record[1] = 4;
    }
    return 0;
}
