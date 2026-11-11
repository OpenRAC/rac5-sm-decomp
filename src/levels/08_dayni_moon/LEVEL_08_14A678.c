extern long long func_14A6B8(void);
extern char *D_0024FFC4;

int func_14A678(void)
{
    if (func_14A6B8() == 0) return 0;
    return *(unsigned char *)(*(char **)(D_0024FFC4 + 0x58) + 0x24) <
           *(unsigned char *)(*(char **)(D_0024FFC4 + 0x58) + 0x25);
}
