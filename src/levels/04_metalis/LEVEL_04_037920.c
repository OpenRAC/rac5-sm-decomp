/* LEVEL_04:0x037920 -- placement copy of LEVEL_01_0362D8.c: fills a two-word local pair and calls the shared table setup with its first word among six arguments. */
extern char D_0024F3D0[];
extern void func_02E128(void *, void *, int, int, int, int);

void func_037920(void)
{
    int v[2];

    v[0] = 2;
    v[1] = 1;
    func_02E128(D_0024F3D0, D_0024F3D0 + 0x2c, 0x200, v[0], 4, 8);
}
