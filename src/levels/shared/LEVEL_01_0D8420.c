/* LEVEL_01:0x0D8420 -- initialises a 100-byte block of window fields from the flags (flag bit 1 marks it invalid), reporting 1 on success. */
extern void memset(void *ptr, int value, unsigned int size);

int func_0D8420(int *p, unsigned int flags)
{
    if (flags & 1) {
        p[0x13] = -1;
        return 0;
    }
    memset(p, 0, 0x64);
    p[0x13] = 0;
    p[0xB] = 0xE0;
    p[0xD] = 0x100;
    p[0xC] = 0;
    p[2] = 5;
    p[0x15] = 0xE0;
    p[0x17] = 0x100;
    p[0x14] = 0;
    p[0xE] = 0x110;
    p[6] = 8;
    p[0] = flags;
    return 1;
}
