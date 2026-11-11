/* LEVEL_04:0x0AB5F0 -- placement copy of FRONTEND_014EB0.c: returns one of two table addresses after a setup call, or null for a bad mode. */
extern unsigned char D_0020FDAB;
extern char D_002CE530[];
extern void func_0AC528(void);

char *func_0AB5F0(int mode)
{
    char *base;
    int high = !(mode < 2);
    if (high)
        return 0;
    func_0AC528();
    D_0020FDAB = 1;
    base = D_002CE530;
    if (mode != 0)
        base += 0x20800;
    return base;
}
