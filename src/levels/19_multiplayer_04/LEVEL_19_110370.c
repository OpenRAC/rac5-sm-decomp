extern char *D_001B5CDC;

int func_110370(void)
{
    return ((*(int *)(D_001B5CDC + 0x94) >> 15) ^ 1) & 1;
}
