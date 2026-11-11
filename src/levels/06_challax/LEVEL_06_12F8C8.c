extern long long func_12F908(void);
extern char *D_001F5D04;

int func_12F8C8(void)
{
    if (func_12F908() == 0) return 0;
    return *(unsigned char *)(*(char **)(D_001F5D04 + 0x58) + 0x24) <
           *(unsigned char *)(*(char **)(D_001F5D04 + 0x58) + 0x25);
}
