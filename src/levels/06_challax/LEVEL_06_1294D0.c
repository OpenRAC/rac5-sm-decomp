extern int func_129590(int);
extern char *D_001F5C4C;

unsigned int func_1294D0(void)
{
    if (func_129590(0) == 0) return 0;
    return (*(int *)(D_001F5C4C + 0x94) >> 14) & 1;
}
