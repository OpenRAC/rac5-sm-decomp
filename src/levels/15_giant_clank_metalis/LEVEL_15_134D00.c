/* LEVEL_15:0x134D00 -- walks two parallel tables, calling a helper for each pair while the first table pointer stays on its start value. */

extern char D_00171C08[];
extern char D_002F5124[];

void func_1214F0(char *a0, char *a1);

void func_134D00(void)
{
    char *s0;
    char *s1;
    char *s2;

    s0 = D_00171C08;
    s2 = s0;
    s1 = D_002F5124;
    do {
        func_1214F0(s1, s0);
        s0 += 0x64;
        s1 += 0x50;
    } while (s0 == s2);
}
