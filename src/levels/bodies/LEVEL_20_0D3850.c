extern int *func_0D3798(void);
extern int func_023C90(int, long long, long long);

int func_0D3850(long long unused, long long second, long long third)
{
    int *record = func_0D3798();
    if (record != 0 && record[0] != 0) {
        if (func_023C90(record[0] - 1, second, third) == 0) {
            record[1] = 2;
            return 1;
        }
        record[1] = 4;
    }
    return 0;
}
