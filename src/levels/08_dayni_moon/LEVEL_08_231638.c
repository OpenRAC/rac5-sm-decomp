/* LEVEL_08:0x231638 -- builds a flag word from the argument, then calls two table helpers with a local buffer. */
extern void func_09E868(char *a0, unsigned int a1, unsigned int a2, int a3, int t0, int t1, int t2);
extern void func_09EA40(char *a0);
extern char D_00230628[];

void func_231638(unsigned int a0)
{
    char buf[16];
    unsigned int flags;

    flags = (((a0 & ~0x3Cu) | 4u) & ~3u) | 1u;
    func_09E868(buf, flags, (unsigned int)D_00230628, 0x5C, 0, -1, 0);
    func_09EA40(buf);
}
