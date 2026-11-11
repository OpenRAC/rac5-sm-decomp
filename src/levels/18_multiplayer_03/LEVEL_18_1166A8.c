extern char *D_001A2F38;
extern char *D_001E0428;

int func_1166A8(void)
{
    int offset = *(int *)(D_001E0428 + 0x174) * 0x5f8 + 4;
    return (int)(D_001A2F38 + offset + 0x54);
}
