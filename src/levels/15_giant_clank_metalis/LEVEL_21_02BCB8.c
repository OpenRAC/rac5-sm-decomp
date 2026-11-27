/* LEVEL_21:0x02BCB8 -- placement copy of LEVEL_01_0362D8.c: fills a two-word local pair and calls the shared table setup with its first word among six arguments. */
extern char D_0017CD40[];
extern void func_027BF8(void *, void *, int, int, int, int);

void func_02BCB8(void)
{
    int v[2];

    v[0] = 2;
    v[1] = 1;
    func_027BF8(D_0017CD40, D_0017CD40 + 0x2c, 0x200, v[0], 4, 8);
}
