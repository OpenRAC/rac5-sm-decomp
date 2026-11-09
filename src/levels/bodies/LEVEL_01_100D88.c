/* LEVEL_01:0x100D88 -- masks a flag word and runs two table routines on a stack buffer. */

extern void func_096948(void *a0, unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6);
extern void func_096B20(void *a0);
extern char D_000FFB60[];

void func_100D88(unsigned int a0)
{
    unsigned int buf[4];
    unsigned int m;

    m = (a0 & 0xFFFFFFC3) | 4;
    func_096948(buf, m & 0xFFFFFFFC, (unsigned int)D_000FFB60, 60, 0, -1, 0);
    func_096B20(buf);
}
