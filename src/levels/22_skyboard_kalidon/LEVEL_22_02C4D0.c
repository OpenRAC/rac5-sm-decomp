/* LEVEL_22:0x02C4D0 -- placement copy of LEVEL_01_0362D8.c: fills a two-word local pair and calls the shared table setup with its first word among six arguments. */
extern char D_001867C0[];
extern void func_028A18(void *, void *, int, int, int, int);

void func_02C4D0(void)
{
    int v[2];

    v[0] = 2;
    v[1] = 1;
    func_028A18(D_001867C0, D_001867C0 + 0x2c, 0x200, v[0], 4, 8);
}
