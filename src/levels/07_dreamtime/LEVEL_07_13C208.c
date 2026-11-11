extern long long func_13C248(void);
extern char *D_0021B404;

int func_13C208(void)
{
    if (func_13C248() == 0) return 0;
    return *(unsigned char *)(*(char **)(D_0021B404 + 0x58) + 0x24) <
           *(unsigned char *)(*(char **)(D_0021B404 + 0x58) + 0x25);
}
