/* LEVEL_01:0x0362D8 -- fills a two-word local pair and calls the shared table setup with its first word among six arguments. */
extern char D_00234BC0[];
extern void func_02E488(void *, void *, int, int, int, int);

void func_0362D8(void)
{
    int v[2];

    v[0] = 2;
    v[1] = 1;
    func_02E488(D_00234BC0, D_00234BC0 + 0x2c, 0x200, v[0], 4, 8);
}
