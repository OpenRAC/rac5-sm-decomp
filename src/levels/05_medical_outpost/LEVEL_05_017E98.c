extern int *D_001DE74C;
extern char *D_001F5E10;

int func_017E98(int value)
{
    int origin = *(int *)(D_001F5E10 + 0x44);
    return *D_001DE74C + ((value - origin) >> 7) * 0x50;
}
