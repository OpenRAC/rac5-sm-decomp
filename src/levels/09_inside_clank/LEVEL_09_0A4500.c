/* LEVEL_09:0x0A4500 -- placement copy of LEVEL_01_0A7250.c: clears the 4 KB buffer of a valid slot and initialises it, falling back to the second mode when the first fails. */
extern unsigned char *D_001DDDAC;
extern void *memset(void *s, int c, unsigned int n);
extern int func_0A3C50(unsigned int slot);
extern int func_0A4BB0(unsigned int slot, int arg);
extern int func_0A4308(unsigned char *buf, int mode);

int func_0A4500(unsigned int slot, int arg)
{
    unsigned char *buf;

    if (!func_0A3C50(slot))
        return 0;
    buf = &D_001DDDAC[(func_0A4BB0(slot, arg) << 12) + 0x1C80];
    memset(buf, 0, 0x1000);
    if (func_0A4308(buf, 0) < 0)
        func_0A4308(buf, 1);
    return 1;
}
