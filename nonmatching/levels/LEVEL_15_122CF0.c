/* USA LEVEL_15.REL:0x122CF0, 208-byte candidate (21 November 2026).
 * Measured pinned: 24 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern unsigned int D_002F2D08;

extern unsigned int func_121CF0(unsigned int key);
extern void func_07A808(void *job, unsigned int word, void (*run)(void), int size, int a, int b, void (*done)(void));
extern void func_07A9E0(void *job);
extern void func_122680(void);
extern void func_121D40(void);

void func_122CF0(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e, unsigned int f)
{
    char job[0x10];
    unsigned int w;

    D_002F2D08 = func_121CF0(0xA7FC1041);
    w = (b << 16) | (a << 27) | (c << 15) | (d << 14) | ((e << 10) | 0x3000) | (f << 6);
    func_07A808(job, w | 4, func_122680, 0x28, 0, -1, func_121D40);
    func_07A9E0(job);
}
