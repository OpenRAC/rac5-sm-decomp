/* LEVEL_06:0x032D28 -- placement copy of LEVEL_01_0362D8.c: fills a two-word local pair and calls the shared table setup with its first word among six arguments. */
extern char D_00221940[];
extern void func_02C868(void *, void *, int, int, int, int);

void func_032D28(void)
{
    int v[2];

    v[0] = 2;
    v[1] = 1;
    func_02C868(D_00221940, D_00221940 + 0x2c, 0x200, v[0], 4, 8);
}
