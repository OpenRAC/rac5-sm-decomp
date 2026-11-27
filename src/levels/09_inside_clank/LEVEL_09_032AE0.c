/* LEVEL_09:0x032AE0 -- placement copy of LEVEL_01_0362D8.c: fills a two-word local pair and calls the shared table setup with its first word among six arguments. */
extern char D_0021C340[];
extern void func_02D2E8(void *, void *, int, int, int, int);

void func_032AE0(void)
{
    int v[2];

    v[0] = 2;
    v[1] = 1;
    func_02D2E8(D_0021C340, D_0021C340 + 0x2c, 0x200, v[0], 4, 8);
}
