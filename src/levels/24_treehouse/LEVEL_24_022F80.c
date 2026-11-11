extern char *func_022400(long long, long long);
extern int func_025AC8(void);

void func_022F80(long long value, int state)
{
    char *record = func_022400(value, -1LL);
    if (*(int *)(record + 0x48) == 0) {
        if (func_025AC8() != 0) {
            state += 10;
        }
        *(int *)(record + 0x48) = state;
    }
}
