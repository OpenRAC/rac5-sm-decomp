/* LEVEL_07:0x0287A8 -- placement copy of LEVEL_01_028448.c: derives two table values from a counter and calls three helpers. */
extern void func_027830(int a, int b, int c);
extern int func_027768(int a, int b);
extern void func_0277E0(int a, int b, int c);

void func_0287A8(unsigned int n, int base)
{
    unsigned int m;
    int off;
    int r;

    m = n - 1;
    off = (m & 1) << 2;
    m = (m >> 1) + 0x84;
    func_027830(m, 1, (base + off - 1) & 0xFF);
    r = func_027768(0x89, 0xFF);
    func_0277E0(0x89, (r + 1) & 0xFF, 0xFF);
}
