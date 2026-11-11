extern int *D_002036CC;
extern char *D_0021B090;

int func_018F38(int value)
{
    int origin = *(int *)(D_0021B090 + 0x44);
    return *D_002036CC + ((value - origin) >> 7) * 0x50;
}
