/* LEVEL_16:0x032450 -- placement copy of LEVEL_01_0362D8.c: fills a two-word local pair and calls the shared table setup with its first word among six arguments. */
extern char D_001E3B08[];
extern void func_02BE80(void *, void *, int, int, int, int);

void func_032450(void)
{
    int v[2];

    v[0] = 2;
    v[1] = 1;
    func_02BE80(D_001E3B08, D_001E3B08 + 0x2c, 0x200, v[0], 4, 8);
}
