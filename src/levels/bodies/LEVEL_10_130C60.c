extern int func_130D20(int);
extern char *D_0020FCAC;

unsigned int func_130C60(void)
{
    if (func_130D20(0) == 0) return 0;
    return (*(int *)(D_0020FCAC + 0x94) >> 14) & 1;
}
