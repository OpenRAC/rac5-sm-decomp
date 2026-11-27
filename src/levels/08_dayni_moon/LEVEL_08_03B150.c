/* LEVEL_08:0x03B150 -- placement copy of LEVEL_01_0362D8.c: fills a two-word local pair and calls the shared table setup with its first word among six arguments. */
extern char D_00283E50[];
extern void func_02EC00(void *, void *, int, int, int, int);

void func_03B150(void)
{
    int v[2];

    v[0] = 2;
    v[1] = 1;
    func_02EC00(D_00283E50, D_00283E50 + 0x2c, 0x200, v[0], 4, 8);
}
