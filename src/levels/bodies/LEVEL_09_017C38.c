extern int *D_001D91CC;
extern char *D_001F0890;

int func_017C38(int value)
{
    int origin = *(int *)(D_001F0890 + 0x44);
    return *D_001D91CC + ((value - origin) >> 7) * 0x50;
}
