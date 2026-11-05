extern char *D_001A2C38;
extern char *D_001E0228;

int func_118028(void)
{
    int offset = *(int *)(D_001E0228 + 0x174) * 0x5f8 + 4;
    return (int)(D_001A2C38 + offset + 0x54);
}
