extern long long func_13F638(void);
extern char *D_0021C0C4;

int func_13F5F8(void)
{
    if (func_13F638() == 0) return 0;
    return *(unsigned char *)(*(char **)(D_0021C0C4 + 0x58) + 0x24) <
           *(unsigned char *)(*(char **)(D_0021C0C4 + 0x58) + 0x25);
}
