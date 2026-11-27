/* LEVEL_15:0x122CF0 -- stores the looked-up handle, packs six small fields into one control word and runs the two table routines on a stack record. */
extern int func_121CF0(unsigned int key);
extern void func_07A808(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
extern int func_07A9E0(void *buf);
extern int D_002F2D08;
extern void func_122680(void);
extern void func_121D40(void);

int func_122CF0(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e, unsigned int f)
{
    unsigned int buf[4];
    unsigned int m;
    unsigned int t;

    D_002F2D08 = func_121CF0(0xA7FC1041);
    m = (a << 27) | (b << 16);
    m = m | (c << 15);
    m = m | (d << 14);
    t = (e << 10) | 0x3000;
    m = m | t;
    m = m | (f << 6);
    func_07A808(buf, m | 4, (unsigned int)func_122680, 0x28, 0, -1, (unsigned int)func_121D40);
    return func_07A9E0(buf);
}
