extern int func_12BE58(int);
extern char *D_001F0B4C;

unsigned int func_12BD98(void)
{
    if (func_12BE58(0) == 0) return 0;
    return (*(int *)(D_001F0B4C + 0x94) >> 14) & 1;
}
