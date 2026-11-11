extern int func_0F1D88(int);
extern char *D_0015B9AC;

unsigned int func_0F1CC8(void)
{
    if (func_0F1D88(0) == 0) return 0;
    return (*(int *)(D_0015B9AC + 0x94) >> 14) & 1;
}
