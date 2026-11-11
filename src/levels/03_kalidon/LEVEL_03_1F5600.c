/* LEVEL_03:0x1F5600 -- rewrites a flag word in four steps and passes it with a local buffer to two helpers. */

extern void func_096578(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
extern void func_096750(void *a0);
extern char D_001F5818[];

void func_1F5600(int a0, unsigned int a1)
{
    unsigned int buf[4];
    unsigned int flags;

    flags = a1 & 0xFFFFFFFCu;
    flags = flags | 1;
    flags = flags & 0xFFFFFFC3u;
    flags = flags | 0x20;
    func_096578(buf, flags, (unsigned int)D_001F5818, 16, 0, -1, 0);
    func_096750(buf);
}
