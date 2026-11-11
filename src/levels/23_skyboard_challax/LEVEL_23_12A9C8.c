extern long long func_12AA08(void);
extern char *D_001DA504;

int func_12A9C8(void)
{
    if (func_12AA08() == 0) return 0;
    return *(unsigned char *)(*(char **)(D_001DA504 + 0x58) + 0x24) <
           *(unsigned char *)(*(char **)(D_001DA504 + 0x58) + 0x25);
}
