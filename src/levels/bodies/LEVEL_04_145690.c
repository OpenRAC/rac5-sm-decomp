extern long long func_1456D0(void);
extern char *D_00220524;

int func_145690(void)
{
    if (func_1456D0() == 0) return 0;
    return *(unsigned char *)(*(char **)(D_00220524 + 0x58) + 0x24) <
           *(unsigned char *)(*(char **)(D_00220524 + 0x58) + 0x25);
}
