extern char *func_023F90(long long, long long);
extern int func_027B98(void);

void func_024B68(long long value, int state)
{
    char *record = func_023F90(value, -1LL);
    if (*(int *)(record + 0x48) == 0) {
        if (func_027B98() != 0) {
            state += 10;
        }
        *(int *)(record + 0x48) = state;
    }
}
