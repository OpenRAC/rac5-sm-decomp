extern int func_132EC0(int);
extern char *D_0020704C;

unsigned int func_132E00(void)
{
    if (func_132EC0(0) == 0) return 0;
    return (*(int *)(D_0020704C + 0x94) >> 14) & 1;
}
