extern int func_135EC0(int);
extern char *D_0021B34C;

unsigned int func_135E00(void)
{
    if (func_135EC0(0) == 0) return 0;
    return (*(int *)(D_0021B34C + 0x94) >> 14) & 1;
}
