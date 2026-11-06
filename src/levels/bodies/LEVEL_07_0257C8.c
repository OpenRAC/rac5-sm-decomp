extern char *func_024BF0(long long, long long);
extern int func_0285F0(void);

void func_0257C8(long long value, int state)
{
    char *record = func_024BF0(value, -1LL);
    if (*(int *)(record + 0x48) == 0) {
        if (func_0285F0() != 0) {
            state += 10;
        }
        *(int *)(record + 0x48) = state;
    }
}
