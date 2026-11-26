/* LEVEL_07:0x036808 -- placement copy of LEVEL_01_0362D8.c: fills a two-word local pair and calls the shared table setup with its first word among six arguments. */
extern char D_0024A4C0[];
extern void func_02E7C0(void *, void *, int, int, int, int);

void func_036808(void)
{
    int v[2];

    v[0] = 2;
    v[1] = 1;
    func_02E7C0(D_0024A4C0, D_0024A4C0 + 0x2c, 0x200, v[0], 4, 8);
}
