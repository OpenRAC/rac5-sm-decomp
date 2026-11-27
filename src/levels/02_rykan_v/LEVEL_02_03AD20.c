/* LEVEL_02:0x03AD20 -- placement copy of LEVEL_01_0362D8.c: fills a two-word local pair and calls the shared table setup with its first word among six arguments. */
extern char D_0024C0D0[];
extern void func_02EC48(void *, void *, int, int, int, int);

void func_03AD20(void)
{
    int v[2];

    v[0] = 2;
    v[1] = 1;
    func_02EC48(D_0024C0D0, D_0024C0D0 + 0x2c, 0x200, v[0], 4, 8);
}
