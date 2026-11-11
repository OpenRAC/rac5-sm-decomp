extern char *func_01E990(long long, long long);
extern int func_022148(void);

void func_01F510(long long value, int state)
{
    char *record = func_01E990(value, -1LL);
    if (*(int *)(record + 0x48) == 0) {
        if (func_022148() != 0) {
            state += 10;
        }
        *(int *)(record + 0x48) = state;
    }
}
