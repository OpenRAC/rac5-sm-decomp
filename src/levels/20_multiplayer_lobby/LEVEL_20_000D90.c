extern char *D_000FD3B4;

char *func_000D90(void)
{
    char *value = D_000FD3B4;
    if (*(unsigned char *)(value + 0x115) == 0)
        return 0;
    return value;
}
