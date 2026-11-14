/* LEVEL_06:0x0A1A20 -- placement copy of LEVEL_01_0A7250.c: clears the 4 KB buffer of a valid slot and initialises it, falling back to the second mode when the first fails. */
extern unsigned char *D_001E2EAC;
extern void *memset(void *s, int c, unsigned int n);
extern int func_0A1170(unsigned int slot);
extern int func_0A20D0(unsigned int slot, int arg);
extern int func_0A1828(unsigned char *buf, int mode);

int func_0A1A20(unsigned int slot, int arg)
{
    unsigned char *buf;

    if (!func_0A1170(slot))
        return 0;
    buf = &D_001E2EAC[(func_0A20D0(slot, arg) << 12) + 0x1C80];
    memset(buf, 0, 0x1000);
    if (func_0A1828(buf, 0) < 0)
        func_0A1828(buf, 1);
    return 1;
}
