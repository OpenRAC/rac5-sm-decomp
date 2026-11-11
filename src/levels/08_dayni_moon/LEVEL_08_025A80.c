extern char *func_024EA8(long long, long long);
extern int func_0288B8(void);

void func_025A80(long long value, int state)
{
    char *record = func_024EA8(value, -1LL);
    if (*(int *)(record + 0x48) == 0) {
        if (func_0288B8() != 0) {
            state += 10;
        }
        *(int *)(record + 0x48) = state;
    }
}
