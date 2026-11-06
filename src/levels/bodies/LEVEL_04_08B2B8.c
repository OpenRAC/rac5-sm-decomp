extern void *func_08B348(void);
extern unsigned int func_08B220(long long);
extern char *D_0020F71C;

unsigned int func_08B2B8(long long value)
{
    if (func_08B348() == 0) {
        return 0;
    }
    return func_08B220(value) |
           *(unsigned int *)(D_0020F71C + 500);
}
