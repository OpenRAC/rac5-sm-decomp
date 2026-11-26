/* LEVEL_03:0x034518 -- placement copy of LEVEL_01_0362D8.c: fills a two-word local pair and calls the shared table setup with its first word among six arguments. */
extern char D_0024FA40[];
extern void func_02E278(void *, void *, int, int, int, int);

void func_034518(void)
{
    int v[2];

    v[0] = 2;
    v[1] = 1;
    func_02E278(D_0024FA40, D_0024FA40 + 0x2c, 0x200, v[0], 4, 8);
}
