/* LEVEL_02:0x028C30 -- placement copy of LEVEL_01_028448.c: derives two table values from a counter and calls three helpers. */
extern void func_027CB8(int a, int b, int c);
extern int func_027BF0(int a, int b);
extern void func_027C68(int a, int b, int c);

void func_028C30(unsigned int n, int base)
{
    unsigned int m;
    int off;
    int r;

    m = n - 1;
    off = (m & 1) << 2;
    m = (m >> 1) + 0x84;
    func_027CB8(m, 1, (base + off - 1) & 0xFF);
    r = func_027BF0(0x89, 0xFF);
    func_027C68(0x89, (r + 1) & 0xFF, 0xFF);
}
