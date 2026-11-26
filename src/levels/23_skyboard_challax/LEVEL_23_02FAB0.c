/* LEVEL_23:0x02FAB0 -- placement copy of LEVEL_01_0362D8.c: fills a two-word local pair and calls the shared table setup with its first word among six arguments. */
extern char D_00202040[];
extern void func_02BFF8(void *, void *, int, int, int, int);

void func_02FAB0(void)
{
    int v[2];

    v[0] = 2;
    v[1] = 1;
    func_02BFF8(D_00202040, D_00202040 + 0x2c, 0x200, v[0], 4, 8);
}
