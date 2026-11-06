extern int func_05F3F0(char *p, int flags);
extern void func_021D50(char *p);
extern int *D_001C73AC;

int func_04A620(char *p)
{
    char *sub;

    if (*(int *)(p + 0x168) == 0)
        return 0;
    sub = p + 0xC0;
    if (sub == 0)
        return 0;
    if (*(int *)((char *)D_001C73AC + 0x24) == 2) {
        if ((*(unsigned int *)(sub + 0x14) & 0x2200) == 0)
            return 0;
    } else {
        if ((*(unsigned int *)(sub + 0x14) & 0x2000) == 0)
            return 0;
    }
    if (*(int *)(p + 0x9A0) == 0x10)
        return 0;
    if (func_05F3F0(p, 0) == 0)
        return 0;
    func_021D50(p);
    return 1;
}
