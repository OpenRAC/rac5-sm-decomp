extern long long func_12ECF0(void);
extern char *D_001D7D84;

int func_12ECB0(void)
{
    if (func_12ECF0() == 0) return 0;
    return *(unsigned char *)(*(char **)(D_001D7D84 + 0x58) + 0x24) <
           *(unsigned char *)(*(char **)(D_001D7D84 + 0x58) + 0x25);
}
