/* LEVEL_08:0x115670 -- clears bit groups in a flag word, then calls two table helpers. */
extern void func_09E868(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
extern void func_09EA40(unsigned int *a0);
extern char D_00115188[];

void func_115670(unsigned int a0)
{
    unsigned int buf[4];
    unsigned int flags;

    flags = (a0 & ~0x3Cu) | 4;
    func_09E868(buf, flags & ~3u, (unsigned int)D_00115188, 16, 0, -1, 0);
    func_09EA40(buf);
}
