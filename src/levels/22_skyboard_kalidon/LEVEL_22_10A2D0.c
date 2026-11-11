extern int func_10A390(int);
extern char *D_0016602C;

unsigned int func_10A2D0(void)
{
    if (func_10A390(0) == 0) return 0;
    return (*(int *)(D_0016602C + 0x94) >> 14) & 1;
}
