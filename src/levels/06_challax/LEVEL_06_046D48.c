extern int func_0629F8(char *p, int flags);
extern void func_022148(char *p);
extern int *D_001E2EAC;

int func_04A620(char *p)
{
    char *sub;

    if (*(int *)(p + 0x168) == 0)
        return 0;
    sub = p + 0xC0;
    if (sub == 0)
        return 0;
    if (*(int *)((char *)D_001E2EAC + 0x24) == 2) {
        if ((*(unsigned int *)(sub + 0x14) & 0x2200) == 0)
            return 0;
    } else {
        if ((*(unsigned int *)(sub + 0x14) & 0x2000) == 0)
            return 0;
    }
    if (*(int *)(p + 0x9A0) == 0x10)
        return 0;
    if (func_0629F8(p, 0) == 0)
        return 0;
    func_022148(p);
    return 1;
}
