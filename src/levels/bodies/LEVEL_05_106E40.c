/* LEVEL_05:0x106E40 -- masks and sets bit fields of its argument, then calls two helpers with a local buffer. */

extern void func_094040(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
extern void func_094218(void *buf);
extern char D_001065D8[];

void func_106E40(unsigned int flags)
{
    unsigned int buf[4];
    unsigned int v;

    v = (flags & ~0x3CU) | 4U;
    func_094040(buf, v & ~3U, (unsigned int)D_001065D8, 0x20, 0, -1, 0);
    func_094218(buf);
}
