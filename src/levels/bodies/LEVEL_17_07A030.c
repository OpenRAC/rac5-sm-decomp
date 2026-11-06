extern void *func_07A100(void);
extern unsigned int func_079F40(long long);
extern char *D_0019788C;

unsigned int func_07A030(long long value)
{
    if (func_07A100() == 0) {
        return 0;
    }
    return func_079F40(value) |
           *(unsigned int *)(D_0019788C + 500);
}
