/* LEVEL_24:0x02F678 -- placement copy of LEVEL_01_0362D8.c: fills a two-word local pair and calls the shared table setup with its first word among six arguments. */
extern char D_00200AC0[];
extern void func_02B9C8(void *, void *, int, int, int, int);

void func_02F678(void)
{
    int v[2];

    v[0] = 2;
    v[1] = 1;
    func_02B9C8(D_00200AC0, D_00200AC0 + 0x2c, 0x200, v[0], 4, 8);
}
