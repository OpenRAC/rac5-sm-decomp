/* LEVEL_10:0x034A30 -- placement copy of LEVEL_01_0362D8.c: fills a two-word local pair and calls the shared table setup with its first word among six arguments. */
extern char D_0023DFC0[];
extern void func_02E310(void *, void *, int, int, int, int);

void func_034A30(void)
{
    int v[2];

    v[0] = 2;
    v[1] = 1;
    func_02E310(D_0023DFC0, D_0023DFC0 + 0x2c, 0x200, v[0], 4, 8);
}
