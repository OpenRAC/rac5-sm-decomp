extern long long func_1392C0(void);
extern char *D_00207104;

int func_139280(void)
{
    if (func_1392C0() == 0) return 0;
    return *(unsigned char *)(*(char **)(D_00207104 + 0x58) + 0x24) <
           *(unsigned char *)(*(char **)(D_00207104 + 0x58) + 0x25);
}
