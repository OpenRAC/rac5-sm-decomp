/* LEVEL_08:0x22D308 -- rewrites a flag word with a second field pattern and passes it with a local buffer to two helpers. */

extern void func_09E868(void *a0, unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6);
extern void func_09EA40(void *a0);
extern char D_0022CCD0[];

void func_22D308(unsigned int a0)
{
    unsigned int buf[4];
    unsigned int flags;

    flags = a0 & 0xFFFFFFC3u;
    flags = flags | 0x18;
    flags = flags & 0xFFFFFFFCu;
    flags = flags | 1;
    func_09E868(buf, flags, (unsigned int)D_0022CCD0, 0x54, 0, -1, 0);
    func_09EA40(buf);
}
