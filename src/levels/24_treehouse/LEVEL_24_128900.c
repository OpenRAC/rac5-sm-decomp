extern int func_1289C0(int);
extern char *D_001D7CCC;

unsigned int func_128900(void)
{
    if (func_1289C0(0) == 0) return 0;
    return (*(int *)(D_001D7CCC + 0x94) >> 14) & 1;
}
