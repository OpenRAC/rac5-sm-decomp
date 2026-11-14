/* LEVEL_23:0x09DFC0 -- placement copy of LEVEL_01_0A7250.c: clears the 4 KB buffer of a valid slot and initialises it, falling back to the second mode when the first fails. */
extern unsigned char *D_001C73AC;
extern void *memset(void *s, int c, unsigned int n);
extern int func_09D710(unsigned int slot);
extern int func_09E670(unsigned int slot, int arg);
extern int func_09DDC8(unsigned char *buf, int mode);

int func_09DFC0(unsigned int slot, int arg)
{
    unsigned char *buf;

    if (!func_09D710(slot))
        return 0;
    buf = &D_001C73AC[(func_09E670(slot, arg) << 12) + 0x1C80];
    memset(buf, 0, 0x1000);
    if (func_09DDC8(buf, 0) < 0)
        func_09DDC8(buf, 1);
    return 1;
}
