extern int *func_01E380(unsigned int value);
extern int func_002688(int, long long, long long);

int func_01E438(unsigned int value, long long second, long long third)
{
    int *record = func_01E380(value);
    if (record != 0 && record[0] != 0) {
        if (func_002688(record[0] - 1, second, third) == 0) {
            record[1] = 2;
            return 1;
        }
        record[1] = 4;
    }
    return 0;
}
