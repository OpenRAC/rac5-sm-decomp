extern int func_131288(int);
extern char *D_0021F6CC;

unsigned int func_1311C8(void)
{
    if (func_131288(0) == 0) return 0;
    return (*(int *)(D_0021F6CC + 0x94) >> 14) & 1;
}
