extern char *func_0226C8(long long, long long);
extern int func_025FC0(void);

void func_023248(long long value, int state)
{
    char *record = func_0226C8(value, -1LL);
    if (*(int *)(record + 0x48) == 0) {
        if (func_025FC0() != 0) {
            state += 10;
        }
        *(int *)(record + 0x48) = state;
    }
}
