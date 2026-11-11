extern long long func_134C28(void);
extern char *D_001F6184;

int func_134BE8(void)
{
    if (func_134C28() == 0) return 0;
    return *(unsigned char *)(*(char **)(D_001F6184 + 0x58) + 0x24) <
           *(unsigned char *)(*(char **)(D_001F6184 + 0x58) + 0x25);
}
