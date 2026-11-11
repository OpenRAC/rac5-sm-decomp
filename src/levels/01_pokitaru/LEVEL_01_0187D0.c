extern int *D_001EF3CC;
extern char *D_00206D90;

int func_0187D0(int value)
{
    int origin = *(int *)(D_00206D90 + 0x44);
    return *D_001EF3CC + ((value - origin) >> 7) * 0x50;
}
