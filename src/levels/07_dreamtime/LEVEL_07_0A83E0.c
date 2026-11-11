/* LEVEL_07:0x0A83E0 -- placement copy of FRONTEND_014EB0.c: returns one of two table addresses after a setup call, or null for a bad mode. */
extern unsigned char D_0020ABEB;
extern char D_002C9630[];
extern void func_0A9318(void);

char *func_0A83E0(int mode)
{
    char *base;
    int high = !(mode < 2);
    if (high)
        return 0;
    func_0A9318();
    D_0020ABEB = 1;
    base = D_002C9630;
    if (mode != 0)
        base += 0x20800;
    return base;
}
