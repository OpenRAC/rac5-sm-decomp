extern int func_124638(int);
extern char *D_001DA44C;

unsigned int func_124578(void)
{
    if (func_124638(0) == 0) return 0;
    return (*(int *)(D_001DA44C + 0x94) >> 14) & 1;
}
