extern char *func_022D30(long long, long long);
extern int func_026840(void);

void func_023908(long long value, int state)
{
    char *record = func_022D30(value, -1LL);
    if (*(int *)(record + 0x48) == 0) {
        if (func_026840() != 0) {
            state += 10;
        }
        *(int *)(record + 0x48) = state;
    }
}
