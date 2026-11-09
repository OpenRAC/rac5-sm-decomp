/* LEVEL_07:0x111130 -- placement copy of LEVEL_01_10E0E0.c: packs six small fields into one control word, then runs two table routines on a stack buffer. */

extern void func_0987D0(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
extern void func_0989A8(void *a0);
extern char D_0010FFC8[];

void func_111130(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int buf[4];
    unsigned int m;
    unsigned int t;

    m = (a1 << 27) | (a0 << 16);
    m = m | (a2 << 14);
    m = m | (a3 << 13);
    t = (a4 << 10) | 0x1000;
    m = m | t;
    m = m | (a5 << 6);
    m = m | 5;
    func_0987D0(buf, m, (unsigned int)D_0010FFC8, 0x44, 0, -1, 0);
    func_0989A8(buf);
}
