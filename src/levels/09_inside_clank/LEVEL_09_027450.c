/* LEVEL_09:0x027450 -- placement copy of LEVEL_01_028448.c: derives two table values from a counter and calls three helpers. */
extern void func_0264D8(int a, int b, int c);
extern int func_026410(int a, int b);
extern void func_026488(int a, int b, int c);

void func_027450(unsigned int n, int base)
{
    unsigned int m;
    int off;
    int r;

    m = n - 1;
    off = (m & 1) << 2;
    m = (m >> 1) + 0x84;
    func_0264D8(m, 1, (base + off - 1) & 0xFF);
    r = func_026410(0x89, 0xFF);
    func_026488(0x89, (r + 1) & 0xFF, 0xFF);
}
