/* LEVEL_20:0x02CAE0 -- placement copy of LEVEL_01_0362D8.c: fills a two-word local pair and calls the shared table setup with its first word among six arguments. */
extern char D_0013B488[];
extern void func_028988(void *, void *, int, int, int, int);

void func_02CAE0(void)
{
    int v[2];

    v[0] = 2;
    v[1] = 1;
    func_028988(D_0013B488, D_0013B488 + 0x2c, 0x200, v[0], 4, 8);
}
