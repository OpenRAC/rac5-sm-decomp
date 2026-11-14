/* LEVEL_03:0x0A6FD0 -- placement copy of LEVEL_01_0A7250.c: clears the 4 KB buffer of a valid slot and initialises it, falling back to the second mode when the first fails. */
extern unsigned char *D_0020C62C;
extern void *memset(void *s, int c, unsigned int n);
extern int func_0A6720(unsigned int slot);
extern int func_0A7680(unsigned int slot, int arg);
extern int func_0A6DD8(unsigned char *buf, int mode);

int func_0A6FD0(unsigned int slot, int arg)
{
    unsigned char *buf;

    if (!func_0A6720(slot))
        return 0;
    buf = &D_0020C62C[(func_0A7680(slot, arg) << 12) + 0x1C80];
    memset(buf, 0, 0x1000);
    if (func_0A6DD8(buf, 0) < 0)
        func_0A6DD8(buf, 1);
    return 1;
}
