extern int func_13F340(int);
extern char *D_0022046C;

unsigned int func_13F280(void)
{
    if (func_13F340(0) == 0) return 0;
    return (*(int *)(D_0022046C + 0x94) >> 14) & 1;
}
