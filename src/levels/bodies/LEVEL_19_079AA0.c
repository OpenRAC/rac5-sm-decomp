extern void *func_079B70(void);
extern unsigned int func_0799B0(int);
extern char *D_001A540C;

unsigned int func_079AA0(int value)
{
    if (func_079B70() == 0) {
        return 0;
    }
    return func_0799B0(value) |
           *(unsigned int *)(D_001A540C + 500);
}
