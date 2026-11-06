extern void *func_07DF70(void);
extern unsigned int func_07DE48(long long);
extern char *D_001C965C;

unsigned int func_07DEE0(long long value)
{
    if (func_07DF70() == 0) {
        return 0;
    }
    return func_07DE48(value) |
           *(unsigned int *)(D_001C965C + 500);
}
