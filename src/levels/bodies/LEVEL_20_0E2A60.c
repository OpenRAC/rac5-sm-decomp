extern int func_0E2AA0(int);
extern char *D_0011721C;

unsigned int func_0E2A60(void)
{
    if (func_0E2AA0(0) == 0) return 0;
    return (*(int *)(D_0011721C + 0x94) >> 14) & 1;
}
