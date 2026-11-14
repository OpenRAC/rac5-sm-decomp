/* LEVEL_01:0x0A7250 -- clears the 4 KB buffer of a valid slot and initialises it, falling back to the second mode when the first fails. */
extern unsigned char *D_001F3FAC;
extern void *memset(void *s, int c, unsigned int n);
extern int func_0A69A0(unsigned int slot);
extern int func_0A7900(unsigned int slot, int arg);
extern int func_0A7058(unsigned char *buf, int mode);

int func_0A7250(unsigned int slot, int arg)
{
    unsigned char *buf;

    if (!func_0A69A0(slot))
        return 0;
    buf = &D_001F3FAC[(func_0A7900(slot, arg) << 12) + 0x1C80];
    memset(buf, 0, 0x1000);
    if (func_0A7058(buf, 0) < 0)
        func_0A7058(buf, 1);
    return 1;
}
