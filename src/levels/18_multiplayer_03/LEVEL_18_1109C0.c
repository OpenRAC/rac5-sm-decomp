extern char D_001D0978[];
extern void func_110AC8(void);

char * func_1109C0(char *record)
{
    *(void **)(record + 0x14) = D_001D0978;
    func_110AC8();
    *(int *)(record + 4) = 0;
    return record;
}
