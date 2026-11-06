extern int *func_0F9F48(void);
extern int func_026B08(int, long long, long long);

int func_0FA000(long long unused, long long second, long long third)
{
    int *record = func_0F9F48();
    if (record != 0 && record[0] != 0) {
        if (func_026B08(record[0] - 1, second, third) == 0) {
            record[1] = 2;
            return 1;
        }
        record[1] = 4;
    }
    return 0;
}
