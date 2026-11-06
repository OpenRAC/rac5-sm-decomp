extern char *func_0235C0(long long, long long);
extern int func_0270A8(void);

void func_024198(long long value, int state)
{
    char *record = func_0235C0(value, -1LL);
    if (*(int *)(record + 0x48) == 0) {
        if (func_0270A8() != 0) {
            state += 10;
        }
        *(int *)(record + 0x48) = state;
    }
}
