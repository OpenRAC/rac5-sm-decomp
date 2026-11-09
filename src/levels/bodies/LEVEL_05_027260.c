/* LEVEL_05:0x027260 -- placement copy of LEVEL_01_028448.c: derives two table values from a counter and calls three helpers. */
extern void func_026210(int a, int b, int c);
extern int func_026148(int a, int b);
extern void func_0261C0(int a, int b, int c);

void func_027260(unsigned int n, int base)
{
    unsigned int m;
    int off;
    int r;

    m = n - 1;
    off = (m & 1) << 2;
    m = (m >> 1) + 0x84;
    func_026210(m, 1, (base + off - 1) & 0xFF);
    r = func_026148(0x89, 0xFF);
    func_0261C0(0x89, (r + 1) & 0xFF, 0xFF);
}
