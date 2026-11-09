/* LEVEL_08:0x10F588 -- placement copy of LEVEL_01_100D88.c: masks a flag word and runs two table routines on a stack buffer. */

extern void func_09E868(void *a0, unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6);
extern void func_09EA40(void *a0);
extern char D_0010E360[];

void func_10F588(unsigned int a0)
{
    unsigned int buf[4];
    unsigned int m;

    m = (a0 & 0xFFFFFFC3) | 4;
    func_09E868(buf, m & 0xFFFFFFFC, (unsigned int)D_0010E360, 60, 0, -1, 0);
    func_09EA40(buf);
}
