extern int *D_001DE2CC;
extern char *D_001F5990;

int func_017078(int value)
{
    int origin = *(int *)(D_001F5990 + 0x44);
    return *D_001DE2CC + ((value - origin) >> 7) * 0x50;
}
