/* LEVEL_19:0x0317E0 -- placement copy of LEVEL_01_0362D8.c: fills a two-word local pair and calls the shared table setup with its first word among six arguments. */
extern char D_001E3C88[];
extern void func_02BC28(void *, void *, int, int, int, int);

void func_0317E0(void)
{
    int v[2];

    v[0] = 2;
    v[1] = 1;
    func_02BC28(D_001E3C88, D_001E3C88 + 0x2c, 0x200, v[0], 4, 8);
}
