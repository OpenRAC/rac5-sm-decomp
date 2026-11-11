/* LEVEL_15:0x1258D8 -- rewrites a flag word with a second field pattern and passes it with a local buffer to two helpers. */

extern void func_07A808(void *a0, unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6);
extern int func_07A9E0(void *a0);
extern char D_00124D10[];

int func_1258D8(unsigned int a0)
{
    unsigned int buf[4];
    unsigned int flags;

    flags = a0 & 0xFFFFFFC3u;
    flags = flags | 0x18;
    flags = flags & 0xFFFFFFFCu;
    flags = flags | 1;
    func_07A808(buf, flags, (unsigned int)D_00124D10, 0x30, 0, -1, 0);
    return func_07A9E0(buf);
}
