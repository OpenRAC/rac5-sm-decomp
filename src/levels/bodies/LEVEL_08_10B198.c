/* LEVEL_08:0x10B198 -- placement copy of LEVEL_04_106C88.c: packs six small fields into one control word, then runs two table routines on a stack buffer. */

extern void func_09E868(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
extern int func_09EA40(void *a0);
extern char D_0010A350[];

int func_10B198(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int buf[4];
    unsigned int m;
    unsigned int t;

    m = (a0 << 27) | (a1 << 16);
    m = m | (a2 << 15);
    m = m | (a3 << 14);
    t = (a4 << 10) | 0x3000;
    m = m | t;
    m = m | (a5 << 6);
    m = m | 5;
    func_09E868(buf, m, (unsigned int)D_0010A350, 0x4C, 0, -1, 0);
    return func_09EA40(buf);
}
