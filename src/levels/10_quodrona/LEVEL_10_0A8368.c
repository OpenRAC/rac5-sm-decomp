/* LEVEL_10:0x0A8368 -- placement copy of LEVEL_01_0A7250.c: clears the 4 KB buffer of a valid slot and initialises it, falling back to the second mode when the first fails. */
extern unsigned char *D_001FCFAC;
extern void *memset(void *s, int c, unsigned int n);
extern int func_0A7AB8(unsigned int slot);
extern int func_0A8A18(unsigned int slot, int arg);
extern int func_0A8170(unsigned char *buf, int mode);

int func_0A8368(unsigned int slot, int arg)
{
    unsigned char *buf;

    if (!func_0A7AB8(slot))
        return 0;
    buf = &D_001FCFAC[(func_0A8A18(slot, arg) << 12) + 0x1C80];
    memset(buf, 0, 0x1000);
    if (func_0A8170(buf, 0) < 0)
        func_0A8170(buf, 1);
    return 1;
}
