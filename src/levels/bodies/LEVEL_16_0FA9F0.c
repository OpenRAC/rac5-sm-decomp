extern int *func_0FA938(unsigned int value);
extern int func_027188(int, long long, long long);

int func_0FA9F0(unsigned int value, long long second, long long third)
{
    int *record = func_0FA938(value);
    if (record != 0 && record[0] != 0) {
        if (func_027188(record[0] - 1, second, third) == 0) {
            record[1] = 2;
            return 1;
        }
        record[1] = 4;
    }
    return 0;
}
