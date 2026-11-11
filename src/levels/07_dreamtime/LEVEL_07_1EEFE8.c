/* LEVEL_07:0x1EEFE8 -- placement copy of LEVEL_03_1F5600.c: rewrites a flag word in four steps and passes it with a local buffer to two helpers. */

extern void func_0987D0(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
extern void func_0989A8(void *a0);
extern char D_001EF200[];

void func_1EEFE8(int a0, unsigned int a1)
{
    unsigned int buf[4];
    unsigned int flags;

    flags = a1 & 0xFFFFFFFCu;
    flags = flags | 1;
    flags = flags & 0xFFFFFFC3u;
    flags = flags | 0x20;
    func_0987D0(buf, flags, (unsigned int)D_001EF200, 16, 0, -1, 0);
    func_0989A8(buf);
}
