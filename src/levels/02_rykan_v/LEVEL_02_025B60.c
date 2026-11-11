extern char *func_024F88(long long, long long);
extern int func_028A78(void);

void func_025B60(long long value, int state)
{
    char *record = func_024F88(value, -1LL);
    if (*(int *)(record + 0x48) == 0) {
        if (func_028A78() != 0) {
            state += 10;
        }
        *(int *)(record + 0x48) = state;
    }
}
