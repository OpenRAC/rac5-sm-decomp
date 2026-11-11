extern char *func_024628(long long, long long);
extern int func_028290(void);

void func_025200(long long value, int state)
{
    char *record = func_024628(value, -1LL);
    if (*(int *)(record + 0x48) == 0) {
        if (func_028290() != 0) {
            state += 10;
        }
        *(int *)(record + 0x48) = state;
    }
}
