extern char *D_001F8248;

char *func_000F68(void)
{
    char *value = D_001F8248;
    if (*(unsigned char *)(value + 0x115) == 0)
        return 0;
    return value;
}
