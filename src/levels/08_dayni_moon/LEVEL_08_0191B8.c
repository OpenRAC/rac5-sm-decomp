extern int *D_00237F4C;
extern char *D_0024FC50;

int func_0191B8(int value)
{
    int origin = *(int *)(D_0024FC50 + 0x44);
    return *D_00237F4C + ((value - origin) >> 7) * 0x50;
}
