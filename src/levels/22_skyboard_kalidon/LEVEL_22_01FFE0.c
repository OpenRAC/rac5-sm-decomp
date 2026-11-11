extern char *func_01F460(long long, long long);
extern int func_022B28(void);

void func_01FFE0(long long value, int state)
{
    char *record = func_01F460(value, -1LL);
    if (*(int *)(record + 0x48) == 0) {
        if (func_022B28() != 0) {
            state += 10;
        }
        *(int *)(record + 0x48) = state;
    }
}
