/* FRONTEND:0x014EB0 -- returns one of two table addresses after a setup call, or null for a bad mode. */
extern unsigned char D_0003028B;
extern char D_0012D770[];
extern void func_015040(void);

char *func_014EB0(int mode)
{
    char *base;
    int high = !(mode < 2);
    if (high)
        return 0;
    func_015040();
    D_0003028B = 1;
    base = D_0012D770;
    if (mode != 0)
        base += 0x20800;
    return base;
}
