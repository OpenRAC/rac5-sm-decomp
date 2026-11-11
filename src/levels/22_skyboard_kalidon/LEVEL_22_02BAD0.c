/* LEVEL_22:0x02BAD0 -- placement copy of LEVEL_01_0358D8.c: when the count is positive, allocates a block and updates the table pointers, then sets the ready flag. */

extern int func_0EB508(int a, int b, void *c, int d);
extern unsigned char D_00184CF8[];
extern unsigned char D_0016B120[];

void func_02BAD0(void)
{
    unsigned char *g;
    int v;
    int r;
    int p;
    unsigned int idx;
    int *tbl;
    int t;

    g = D_00184CF8;
    v = *(int *)(g + 0x1A94);
    if (v > 0) {
        r = func_0EB508(v * 0x120, 0, (void *)D_0016B120, 0x59F);
        *(int *)(g + 0x1A8C) = r;
        p = *(int *)(g + 0x1A94) * 0x90;
        *(int *)(g + 0x1A90) = r + p;
        idx = *(unsigned int *)(g + 0x1A98);
        tbl = (int *)(g + 0x1A8C);
        t = tbl[idx];
        *(int *)(g + 0x1A9C) = t;
        *(int *)(g + 0x1AA0) = t + p;
    }
    *(unsigned char *)(g + 0x1AA4) = 1;
}
