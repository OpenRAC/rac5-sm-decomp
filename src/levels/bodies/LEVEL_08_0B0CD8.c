/* LEVEL_08:0x0B0CD8 -- placement copy of FRONTEND_014EB0.c: returns one of two table addresses after a setup call, or null for a bad mode. */
extern unsigned char D_0023F7AB;
extern char D_00302FB0[];
extern void func_0B1C10(void);

char *func_0B0CD8(int mode)
{
    char *base;
    int high = !(mode < 2);
    if (high)
        return 0;
    func_0B1C10();
    D_0023F7AB = 1;
    base = D_00302FB0;
    if (mode != 0)
        base += 0x20800;
    return base;
}
