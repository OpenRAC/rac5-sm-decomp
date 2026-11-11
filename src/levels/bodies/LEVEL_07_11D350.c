extern int *func_11D298(unsigned int value);
extern int func_029A70(int, long long, long long);

int func_11D350(unsigned int value, long long second, long long third)
{
    int *record = func_11D298(value);
    if (record != 0 && record[0] != 0) {
        if (func_029A70(record[0] - 1, second, third) == 0) {
            record[1] = 2;
            return 1;
        }
        record[1] = 4;
    }
    return 0;
}
