extern int func_110358(int);
extern char *D_001B5CDC;

unsigned int func_110318(void)
{
    if (func_110358(0) == 0) return 0;
    return (*(int *)(D_001B5CDC + 0x94) >> 14) & 1;
}
