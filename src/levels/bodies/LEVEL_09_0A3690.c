/* LEVEL_09:0x0A3690 -- placement copy of FRONTEND_014EB0.c: returns one of two table addresses after a setup call, or null for a bad mode. */
extern unsigned char D_001E06EB;
extern char D_0029B4B0[];
extern void func_0A45C8(void);

char *func_0A3690(int mode)
{
    char *base;
    int high = !(mode < 2);
    if (high)
        return 0;
    func_0A45C8();
    D_001E06EB = 1;
    base = D_0029B4B0;
    if (mode != 0)
        base += 0x20800;
    return base;
}
