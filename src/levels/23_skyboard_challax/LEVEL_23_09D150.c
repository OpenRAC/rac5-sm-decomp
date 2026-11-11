/* LEVEL_23:0x09D150 -- placement copy of FRONTEND_014EB0.c: returns one of two table addresses after a setup call, or null for a bad mode. */
extern unsigned char D_001C9CEB;
extern char D_00285170[];
extern void func_09E088(void);

char *func_09D150(int mode)
{
    char *base;
    int high = !(mode < 2);
    if (high)
        return 0;
    func_09E088();
    D_001C9CEB = 1;
    base = D_00285170;
    if (mode != 0)
        base += 0x20800;
    return base;
}
