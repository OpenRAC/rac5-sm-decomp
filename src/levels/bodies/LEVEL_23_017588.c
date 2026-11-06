extern int *D_001C27CC;
extern char *D_001DA190;

int func_017588(int value)
{
    int origin = *(int *)(D_001DA190 + 0x44);
    return *D_001C27CC + ((value - origin) >> 7) * 0x50;
}
