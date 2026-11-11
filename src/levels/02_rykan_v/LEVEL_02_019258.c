extern int *D_0020404C;
extern char *D_0021BD50;

int func_019258(int value)
{
    int origin = *(int *)(D_0021BD50 + 0x44);
    return *D_0020404C + ((value - origin) >> 7) * 0x50;
}
