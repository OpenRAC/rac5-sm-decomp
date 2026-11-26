/* LEVEL_17:0x031D98 -- placement copy of LEVEL_01_0362D8.c: fills a two-word local pair and calls the shared table setup with its first word among six arguments. */
extern char D_001D4E08[];
extern void func_02B800(void *, void *, int, int, int, int);

void func_031D98(void)
{
    int v[2];

    v[0] = 2;
    v[1] = 1;
    func_02B800(D_001D4E08, D_001D4E08 + 0x2c, 0x200, v[0], 4, 8);
}
