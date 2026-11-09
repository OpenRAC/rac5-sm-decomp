/* LEVEL_15:0x0C21A8 -- packs six small fields into one word with a flag, then calls a builder with a local buffer and a finisher. */
extern char D_000C16E0[];
extern void func_07A808(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
extern void *func_07A9E0(unsigned char *a0);

void *func_0C21A8(unsigned int x0, unsigned int x1, unsigned int x2, unsigned int x3, unsigned int x4, unsigned int x5)
{
    unsigned char buf[16];

    x0 <<= 27;
    x1 <<= 16;
    x0 |= x1;
    x2 <<= 15;
    x0 |= x2;
    x3 <<= 14;
    x0 |= x3;
    x4 = (x4 << 10) | 0x1000u;
    x0 |= x4;
    x5 <<= 6;
    x0 |= x5;
    func_07A808((unsigned int *)buf, x0 | 6u, (unsigned int)D_000C16E0, 0x3C, 0, 6, 0);
    return func_07A9E0(buf);
}
