/* LEVEL_01:0x028448 -- derives two table values from a counter and calls three helpers. */
extern void func_0274D0(int a, int b, int c);
extern int func_027408(int a, int b);
extern void func_027480(int a, int b, int c);

void func_028448(unsigned int n, int base)
{
    unsigned int m;
    int off;
    int r;

    m = n - 1;
    off = (m & 1) << 2;
    m = (m >> 1) + 0x84;
    func_0274D0(m, 1, (base + off - 1) & 0xFF);
    r = func_027408(0x89, 0xFF);
    func_027480(0x89, (r + 1) & 0xFF, 0xFF);
}
