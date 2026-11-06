extern int *D_00207A4C;
extern char *D_0021F410;

int func_0185D8(int value)
{
    int origin = *(int *)(D_0021F410 + 0x44);
    return *D_00207A4C + ((value - origin) >> 7) * 0x50;
}
