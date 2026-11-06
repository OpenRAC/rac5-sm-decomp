extern char *func_0242A8(long long, long long);
extern int func_027EF8(void);

void func_024E80(long long value, int state)
{
    char *record = func_0242A8(value, -1LL);
    if (*(int *)(record + 0x48) == 0) {
        if (func_027EF8() != 0) {
            state += 10;
        }
        *(int *)(record + 0x48) = state;
    }
}
