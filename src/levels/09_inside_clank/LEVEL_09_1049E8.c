/* LEVEL_09:0x1049E8 -- placement copy of LEVEL_01_108B08.c: packs six small fields into one control word, then runs two table routines on a stack buffer. */
extern void func_0930A0(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
extern int func_093278(void *a0);

int func_1049E8(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    unsigned int buf[4];
    unsigned int m;
    unsigned int t;

    m = (a0 << 27) | (a1 << 16);
    m = m | (a2 << 15);
    m = m | (a3 << 14);
    t = (a4 << 10) | 0x2000;
    m = m | t;
    m = m | (a5 << 6);
    m = m | 0x21;
    func_0930A0(buf, m, a6, 0x14, 0, -1, a7);
    return func_093278(buf);
}
