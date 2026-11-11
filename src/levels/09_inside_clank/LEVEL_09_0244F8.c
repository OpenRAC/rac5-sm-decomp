extern char *func_023920(long long, long long);
extern int func_027298(void);

void func_0244F8(long long value, int state)
{
    char *record = func_023920(value, -1LL);
    if (*(int *)(record + 0x48) == 0) {
        if (func_027298() != 0) {
            state += 10;
        }
        *(int *)(record + 0x48) = state;
    }
}
