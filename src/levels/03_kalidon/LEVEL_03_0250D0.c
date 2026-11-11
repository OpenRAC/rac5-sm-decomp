extern char *func_0244F8(long long, long long);
extern int func_028170(void);

void func_0250D0(long long value, int state)
{
    char *record = func_0244F8(value, -1LL);
    if (*(int *)(record + 0x48) == 0) {
        if (func_028170() != 0) {
            state += 10;
        }
        *(int *)(record + 0x48) = state;
    }
}
