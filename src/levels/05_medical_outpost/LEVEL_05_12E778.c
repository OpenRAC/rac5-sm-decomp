extern int func_12E838(int);
extern char *D_001F60CC;

unsigned int func_12E778(void)
{
    if (func_12E838(0) == 0) return 0;
    return (*(int *)(D_001F60CC + 0x94) >> 14) & 1;
}
