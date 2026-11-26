/* LEVEL_05:0x033FE8 -- placement copy of LEVEL_01_0362D8.c: fills a two-word local pair and calls the shared table setup with its first word among six arguments. */
extern char D_002208C0[];
extern void func_02D140(void *, void *, int, int, int, int);

void func_033FE8(void)
{
    int v[2];

    v[0] = 2;
    v[1] = 1;
    func_02D140(D_002208C0, D_002208C0 + 0x2c, 0x200, v[0], 4, 8);
}
