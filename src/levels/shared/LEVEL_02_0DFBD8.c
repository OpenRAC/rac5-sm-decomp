extern void memset(void *ptr, int value, unsigned int size);

int func_000DFBD8(int *p, unsigned int flags)
{
    int half;
    int left;
    int right;

    if (flags & 1) {
        p[0x32] = -1;
        return 0;
    }
    memset(p, 0, 0xE0);
    half = p[8] / 2;
    p[0] = flags;
    left = 0xF0 - half;
    right = 0xF0 + half;
    p[0x32] = 0;
    p[0xE] = left;
    p[0x10] = right;
    p[0x34] = left;
    p[0x36] = right;
    p[0x11] = 0x110;
    p[7] = 8;
    p[8] = 0x20;
    p[0xF] = 0;
    p[0x33] = 0;
    p[2] = 4;
    return 1;
}
