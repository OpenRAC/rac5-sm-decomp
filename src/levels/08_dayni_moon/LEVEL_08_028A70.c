/* LEVEL_08:0x028A70 -- placement copy of LEVEL_01_028448.c: derives two table values from a counter and calls three helpers. */
extern void func_027AF8(int a, int b, int c);
extern int func_027A30(int a, int b);
extern void func_027AA8(int a, int b, int c);

void func_028A70(unsigned int n, int base)
{
    unsigned int m;
    int off;
    int r;

    m = n - 1;
    off = (m & 1) << 2;
    m = (m >> 1) + 0x84;
    func_027AF8(m, 1, (base + off - 1) & 0xFF);
    r = func_027A30(0x89, 0xFF);
    func_027AA8(0x89, (r + 1) & 0xFF, 0xFF);
}
