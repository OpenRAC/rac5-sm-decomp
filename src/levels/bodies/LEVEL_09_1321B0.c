extern long long func_1321F0(void);
extern char *D_001F0C04;

int func_1321B0(void)
{
    if (func_1321F0() == 0) return 0;
    return *(unsigned char *)(*(char **)(D_001F0C04 + 0x58) + 0x24) <
           *(unsigned char *)(*(char **)(D_001F0C04 + 0x58) + 0x25);
}
