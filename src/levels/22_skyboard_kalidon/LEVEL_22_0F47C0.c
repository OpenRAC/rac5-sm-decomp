extern int *func_0F4708(unsigned int value);
extern int func_023CC8(int, long long, long long);

int func_0F47C0(unsigned int value, long long second, long long third)
{
    int *record = func_0F4708(value);
    if (record != 0 && record[0] != 0) {
        if (func_023CC8(record[0] - 1, second, third) == 0) {
            record[1] = 2;
            return 1;
        }
        record[1] = 4;
    }
    return 0;
}
