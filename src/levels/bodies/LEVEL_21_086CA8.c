/* LEVEL_21:0x086CA8 -- placement copy of FRONTEND_014EB0.c: returns one of two table addresses after a setup call, or null for a bad mode. */
extern unsigned char D_0014B56B;
extern char D_001CBD70[];
extern void func_087BE0(void);

char *func_086CA8(int mode)
{
    char *base;
    int high = !(mode < 2);
    if (high)
        return 0;
    func_087BE0();
    D_0014B56B = 1;
    base = D_001CBD70;
    if (mode != 0)
        base += 0x20800;
    return base;
}
