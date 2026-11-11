/* LEVEL_15:0x127540 -- pairs a cursor walking one table with a fixed block and a second cursor walking another, calling a helper for each pair. */

extern char D_002F2D20[];
extern char D_002F3D98[];
extern char D_0015D400[];
extern void func_0EABF0(char *a, char *b, char *c);

void func_127540(void)
{
    char *base;
    char *p;
    char *q;
    char *end;
    char *r;

    base = D_002F2D20;
    q = D_0015D400;
    end = q + 0x174;
    r = D_002F3D98;
    p = base + 0x24;
    do {
        func_0EABF0(p, r, q);
        q += 0x7C;
        p += 0x3C;
    } while ((int)q < (int)end);
}
