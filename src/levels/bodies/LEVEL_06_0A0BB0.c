/* LEVEL_06:0x0A0BB0 -- placement copy of FRONTEND_014EB0.c: returns one of two table addresses after a setup call, or null for a bad mode. */
extern unsigned char D_001E57EB;
extern char D_002A0AB0[];
extern void func_0A1AE8(void);

char *func_0A0BB0(int mode)
{
    char *base;
    int high = !(mode < 2);
    if (high)
        return 0;
    func_0A1AE8();
    D_001E57EB = 1;
    base = D_002A0AB0;
    if (mode != 0)
        base += 0x20800;
    return base;
}
