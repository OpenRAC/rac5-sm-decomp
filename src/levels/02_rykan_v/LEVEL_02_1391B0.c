extern int func_139270(int);
extern char *D_0021C00C;

unsigned int func_1391B0(void)
{
    if (func_139270(0) == 0) return 0;
    return (*(int *)(D_0021C00C + 0x94) >> 14) & 1;
}
