/* LEVEL_04:0x0280B0 -- placement copy of LEVEL_01_028448.c: derives two table values from a counter and calls three helpers. */
extern void func_027160(int a, int b, int c);
extern int func_027098(int a, int b);
extern void func_027110(int a, int b, int c);

void func_0280B0(unsigned int n, int base)
{
    unsigned int m;
    int off;
    int r;

    m = n - 1;
    off = (m & 1) << 2;
    m = (m >> 1) + 0x84;
    func_027160(m, 1, (base + off - 1) & 0xFF);
    r = func_027098(0x89, 0xFF);
    func_027110(0x89, (r + 1) & 0xFF, 0xFF);
}
